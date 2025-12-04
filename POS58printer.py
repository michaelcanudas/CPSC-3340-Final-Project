# install escpos using command pip3 install escpos
from escpos.printer import Usb

# 0x0416 and 0x5011 are the details we extracted from lsusb
# 0x81 and 0x03 are the bEndpointAddress for input and output

p = Usb(0x0416, 0x5011, in_ep=0x81, out_ep=0x03, profile="POS-5890")

p.text("Hello world!\n")
p.text("This print should work!\n")
p.text("---------------\n\n\n")