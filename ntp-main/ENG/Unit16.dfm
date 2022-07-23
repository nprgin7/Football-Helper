object Form16: TForm16
  Left = 0
  Top = 0
  Caption = 'Form16'
  ClientHeight = 321
  ClientWidth = 678
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 296
    Top = 208
    Width = 75
    Height = 25
    Caption = 'Compare'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 104
    Top = 80
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 1
    TextHint = 'ATTACK'
  end
  object Edit2: TEdit
    Left = 104
    Top = 120
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 2
    TextHint = 'DEFENSE'
  end
  object Edit3: TEdit
    Left = 104
    Top = 160
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 3
    TextHint = 'PACE'
  end
  object Edit4: TEdit
    Left = 448
    Top = 80
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 4
    TextHint = 'ATTACK'
  end
  object Edit5: TEdit
    Left = 448
    Top = 120
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 5
    TextHint = 'DEFENSE'
  end
  object Edit6: TEdit
    Left = 448
    Top = 160
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 6
    TextHint = 'PACE'
  end
  object Edit7: TEdit
    Left = 104
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 7
    TextHint = 'Player Name'
  end
  object Edit8: TEdit
    Left = 448
    Top = 40
    Width = 121
    Height = 21
    TabOrder = 8
    TextHint = 'Player Name'
  end
end
