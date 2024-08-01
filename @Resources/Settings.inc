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

; Drive letter for your primary storage disk
disk1=C:
; Drive letter for your secondary storage disk
disk2=D:

; Network Interface Controller, recommended to use "Best"
networkInterface=Best
; Max download speed in bits/sec (365Mb * 1000000 = 365000000b)
maxDownload=365000000
; Max upload speed in bits/sec (12Mb * 1000000 = 12000000b)
maxUpload=12000000

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