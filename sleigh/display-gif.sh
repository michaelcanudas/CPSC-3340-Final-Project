#!/bin/bash
# starting on boot with sleighstarter.service
export DISPLAY=:0
echo "Launching Firefox with GIF..."  
# firefox --kiosk /home/student334/omg/CPSC-3340-Final-Project/sleigh/sleigh_display.html
chromium-browser --kiosk "file:/home/student334/omg/CPSC-3340-Final-Project/sleigh/sleigh_display.html"
