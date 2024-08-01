;============================================================================
; VARIABLES
;============================================================================

[variables]
colorBase=0,0,0,125
colorBG=100,100,100,50
colorFG=255,255,255,255
colorNone=0,0,0,0
fontName=pixelmix
fontSize=6

disk1=C:                    ; Drive letter for your primary storage disk
disk2=D:                    ; Drive letter for your secondary storage disk

networkInterface=Best       ; Network Interface Controller, recommended to use "Best"
maxDownload=365000000       ; Max download speed in bits/sec (365Mb * 1000000 = 365000000b)
maxUpload=12000000          ; Max upload speed in bits/sec (12Mb * 1000000 = 12000000b)

;============================================================================
; STYLES
;============================================================================

[styleText]
StringEffect=Shadow
FontEffectColor=#colorBG#
FontColor=#colorFG#
FontFace=#fontName#
FontSize=#fontSize#

[styleTextRight]
StringEffect=Shadow
FontEffectColor=#colorBG#
FontColor=#colorFG#
FontFace=#fontName#
FontSize=#fontSize#
StringAlign=Right

[styleBar]
BarColor=#colorFG#
BarOrientation=HORIZONTAL
SolidColor=#colorBG#
X=45
Y=1r
W=162
H=7