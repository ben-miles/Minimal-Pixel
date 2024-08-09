;============================================================================
; VARIABLES
;============================================================================

[Variables]
ColorBase=0,0,0,125
ColorBG=100,100,100,50
ColorFG=255,255,255,255
ColorNone=0,0,0,0
FontName=pixelmix
FontSizeSmall=6
FontSizeLarge=12

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

[StyleTextSmall]
FontColor=#ColorFG#
FontFace=#FontName#
FontEffectColor=#ColorBG#
FontSize=#FontSizeSmall#
StringEffect=Shadow
X=5
Y=5R

[StyleTextButton]
FontColor=#ColorFG#
FontFace=#FontName#
FontEffectColor=#ColorBG#
FontSize=#FontSizeSmall#
MouseOverAction=[!SetOption #CurrentSection# "FontColor" "#ColorBase#"][!SetOption #CurrentSection# "SolidColor" "#ColorFG#"][!UpdateMeter #CurrentSection#][!Redraw]
MouseLeaveAction=[!SetOption #CurrentSection# "FontColor" "#ColorFG#"][!SetOption #CurrentSection# "SolidColor" "#ColorBG#"][!UpdateMeter #CurrentSection#][!Redraw]
SolidColor=#ColorBG#
StringAlign=CenterCenter
StringEffect=Shadow
;X=245
;Y=5R

[StyleTextButtonConfirm]
FontColor=#ColorFG#
FontFace=#FontName#
FontEffectColor=#ColorBG#
FontSize=#FontSizeSmall#
FontWeight=900
Hidden=1
MouseOverAction=[!SetOption #CurrentSection# "FontColor" "#ColorBase#"][!SetOption #CurrentSection# "SolidColor" "#ColorFG#"][!UpdateMeter #CurrentSection#][!Redraw]
MouseLeaveAction=[!Refresh #CURRENTCONFIG#][!SetOption #CurrentSection# "FontColor" "#ColorFG#"][!SetOption #CurrentSection# "SolidColor" "#ColorBG#"][!UpdateMeter #CurrentSection#][!Redraw]
SolidColor=#ColorBG#
StringAlign=CenterCenter
StringEffect=Shadow
X=245
Y=5R

[StyleTextSmallRight]
FontColor=#ColorFG#
FontFace=#FontName#
FontEffectColor=#ColorBG#
FontSize=#FontSizeSmall#
StringAlign=Right
StringEffect=Shadow
X=246
Y=-1r

[StyleTextLarge]
FontColor=#ColorFG#
FontFace=#FontName#
FontEffectColor=#ColorBG#
FontSize=#FontSizeLarge#
FontWeight=900
StringEffect=Shadow
X=2
Y=-2R

[StyleTextLargeRight]
FontColor=#ColorFG#
FontFace=#FontName#
FontEffectColor=#ColorBG#
FontSize=#FontSizeLarge#
FontWeight=900
StringAlign=Right
StringEffect=Shadow
X=245
Y=-2r

[StyleBarSmall]
BarColor=#ColorFG#
BarOrientation=Horizontal
SolidColor=#ColorBG#
X=20
Y=1r
W=180
H=7

[styleVisualizer]
[StyleBarLarge]
BarColor=#ColorFG#
BarOrientation=Horizontal
SolidColor=#ColorBG#
X=5R
Y=2r
W=140
H=14

[StyleLine]
LineCount=1
LineColor=#ColorFG#
SolidColor=#ColorBG#
X=5
Y=5R
H=30
W=239

BarColor=#ColorFG#
BarOrientation=Vertical
SolidColor=#ColorBG#
X=1R
Y=0r
W=4
H=75

[StyleSpacer]
X=0
Y=0R
H=#SpacerHeight#
W=#SkinWidth#
SolidColor=#ColorNone#