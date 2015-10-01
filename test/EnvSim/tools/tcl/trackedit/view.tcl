#     Project: openETCS / EnvSim
#      Module: trackedit / view.tcl
# Description: Main UI view for trackedit
# 
# History:
# - 24.09.15, J. Kastner: initial version
package require Tk
#package require BWidget

namespace eval ::view {
  set idValue ""
  set posValue ""
  variable packetFrame
  variable tabPackets
  # dict with data entries of the currently selected packet
  variable packetData
}

proc view::addLabelField {path label var col row {value ""}} {
  grid [ttk::label ${path}_l -text $label] -column $col -row $row -sticky e
  if {$value != ""} {
    grid [ttk::entry ${path}_v -text "$value"] -column [expr $col + 1] -row $row
  } else {
    grid [ttk::entry ${path}_v -textvariable $var] -column [expr $col + 1] -row $row
  }
}

proc view:setValue {path value} {
  ${path}_v delete 0 end
  ${path}_v insert 0 "$value"
}

proc view::init {} {
  variable tabPackets
  variable packetFrame
  option add *tearOff 0

  wm title . "openETCS TrackEditor"

  grid [ttk::frame .c -padding 10] -sticky nwes


  ### MENU ###
  menu .menubar
  set m .menubar
#  if $view::isOSX {
#    .menubar add cascade -menu [menu .menubar.apple] -label TrackEdit
#    .menubar.apple add command -label "About My Application"
#  }
  # File
  menu $m.file
  $m add cascade -menu $m.file -label File
  $m.file add command -label "Open Track" -command "view::openTrackDialog"

  . configure -menu .menubar

  ### TREE VIEW ###
  grid [ttk::frame .c.nav -padding "0 0 5 0"] -column 0 -row 0 -sticky ns 
  grid rowconfigure .c.nav 0 -weight 1
  grid [ttk::treeview .c.nav.tree -columns Position -height 20] -column 0 -row 0 -sticky ns
  set tree .c.nav.tree
  grid [ttk::scrollbar .c.nav.sb -command "$tree yview"] -column 1 -row 0 -sticky ns
  $tree configure -yscrollcommand ".c.nav.sb set"
  $tree column  #0 -width 100
  $tree heading #0 -text ID
  $tree column  #1 -width 100
  $tree heading #1 -text Position
  bind $tree <<TreeviewSelect>> ctrl::onTreeSelect


  ### DATA PANEL ###
  grid [ttk::frame .c.d] -column 1 -row 0 -sticky nwes
  grid columnconfigure .c.d 2 -minsize 20
  # message ID
  addLabelField .c.d.id ID: view::idValue 0 0
  # position
  addLabelField .c.d.pos Position: view::posValue 3 0
  # notebook with "Header" and "Packets"
  grid [ttk::notebook .c.d.n] -column 0 -columnspan 5 -row 1 -sticky wens
  grid rowconfigure .c.d 1 -weight 1
  set notebook .c.d.n 

  # Tab "Header"
  set tabHeaders $notebook.headers
  ttk::frame $tabHeaders
  $notebook add $tabHeaders -text Header
  grid [ttk::treeview $tabHeaders.tree -columns Value] -sticky ns
  set headers $tabHeaders.tree
  grid rowconfigure $tabHeaders 0 -weight 1
  $headers heading #0 -text Header
  $headers heading #1 -text Value

  # Tab "Packets"
  set tabPackets $notebook.packets
  ttk::frame $tabPackets
  $notebook add $tabPackets -text Packets
  grid [ttk::treeview $tabPackets.tree -columns {nid_packet q_dir name}] -column 0 -row 0 -sticky we
  grid columnconfigure $tabPackets 0 -weight 1
  set packetinfo $tabPackets.tree
  $packetinfo heading #0 -text #
  $packetinfo column #0 -width 30 -stretch false
  $packetinfo heading #1 -text Id
  $packetinfo column #1 -width 30 -stretch false
  $packetinfo heading #2 -text Dir
  $packetinfo column #2 -width 30 -stretch false
  $packetinfo heading #3 -text Name
  $packetinfo column #3
  bind $packetinfo <<TreeviewSelect>> ctrl::onPacketTreeSelect
  
  set packetFrame $tabPackets.f
  grid [ttk::frame $packetFrame] -column 0 -row 1
}


proc view::openTrackDialog {} {
  set types {
    {{openETCS Track Files} {.trk}}
  }
  set filename [tk_getOpenFile -filetypes $types]

  if {$filename != ""} {
    ctrl::openTrack "$filename"
  }
}


proc view::clearPacketFrame {} {
  variable packetFrame

  grid forget $packetFrame
  destroy $packetFrame
  grid [ttk::frame $packetFrame] -column 0 -row 1
}

proc view::showPNotSupported {} {
  variable packetData
  variable packetFrame

  set packetData {}
  clearPacketFrame

  grid [ttk::label $packetFrame.l -text {Packet currently not supported}]
}

proc view::addValues {path data col row names} {
  foreach name $names {
    set ::pkt_${name} [dict get $data $name]
    view::addLabelField $path.$name $name ::pkt_$name $col $row
    incr row
  }
}


proc view::showP042 {data} {
  variable packetFrame
  variable packetData

  set packetData $data
  clearPacketFrame

  addValues $packetFrame $data 0 0 "q_dir q_rbc nid_c nid_rbc nid_radio q_sleepsession"
}

proc view::showP045 {data} {
  variable packetFrame
  variable packetData

  set packetData $data
  clearPacketFrame

  addValues $packetFrame $data 0 0 "q_dir nid_mn"
}

proc view::showP046 {data} {
  variable packetFrame
  variable packetData

  set packetData $data
  clearPacketFrame
}

proc view::showP057 {data} {
  variable packetFrame
  variable packetData

  set packetData $data
  clearPacketFrame

  addValues $packetFrame $data 0 0 "q_dir t_mar t_timeoutrqst t_cycrqst"
}