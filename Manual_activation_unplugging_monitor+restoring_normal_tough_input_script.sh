#!/bin/sh
xrandr --output DP3 --off --output DP2 --off --output DP1 --off --output HDMI2 --off --output HDMI1 --off --output LVDS1 --mode 1280x800 --pos 0x0 --rotate normal --output VGA1 --off
xsetwacom set "Serial Wacom Tablet stylus" MapToOutput LVDS1