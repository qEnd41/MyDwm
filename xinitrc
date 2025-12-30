#!/bin/sh
xset s off &    
xset -dpms &
xset s noblank & 

setxkbmap -layout us,ua,ru -option grp:alt_shift_toggle &

dwmblocks &

stalonetray --geometry 1x1-0+0 --bg "#000000" --icon-size 18 --window-type dock --window-layer top --sticky true &

exec dwm
