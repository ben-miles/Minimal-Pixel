;============================================================================
; VARIABLES
;============================================================================

[Variables]
ColorBase=0,0,0,125
ColorBG=100,100,100,50
ColorFG=255,255,255,255
ColorNone=0,0,0,0
FontName=pixelmix
FontSize=6

; Drive letter for your primary storage disk
Disk1=C
; Drive letter for your secondary storage disk
Disk2=D

; Network Interface Controller, recommended to use "Best"
networkInterface=Best
; Max download speed in bits/sec (365Mb * 1000000 = 365000000b)
MaxDownload=365000000
; Max upload speed in bits/sec (12Mb * 1000000 = 12000000b)
MaxUpload=12000000

SkinWidth=250
SpacerHeight=15
ButtonHeight=30

;============================================================================
; STYLES
;============================================================================

[styleText]
StringEffect=Shadow
FontEffectColor=#ColorBG#
FontColor=#ColorFG#
FontFace=#FontName#
FontSize=#FontSize#

[styleTextRight]
StringEffect=Shadow
FontEffectColor=#ColorBG#
FontColor=#ColorFG#
FontFace=#FontName#
FontSize=#FontSize#
StringAlign=Right

[styleBar]
BarColor=#ColorFG#
BarOrientation=Horizontal
SolidColor=#ColorBG#
X=45
Y=1r
W=162
H=7

[styleVisualizer]
BarColor=#ColorFG#
BarOrientation=Vertical
SolidColor=#ColorBG#
X=1R
Y=0r
W=4
H=75

[styleSpacer]
X=0
Y=0R
H=#SpacerHeight#
W=#SkinWidth#
SolidColor=#ColorNone#