object Form27: TForm27
  Left = 0
  Top = 0
  Caption = 'Form27'
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
  object Label1: TLabel
    Left = 47
    Top = 224
    Width = 59
    Height = 13
    Caption = 'Player value'
  end
  object Label2: TLabel
    Left = 319
    Top = 224
    Width = 83
    Height = 13
    Caption = 'Goalkeeper value'
  end
  object Label3: TLabel
    Left = 240
    Top = 16
    Width = 156
    Height = 24
    Caption = 'TRANSFERMARKT'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 144
    Top = 56
    Width = 35
    Height = 13
    Caption = 'Players'
  end
  object Label5: TLabel
    Left = 432
    Top = 56
    Width = 59
    Height = 13
    Caption = 'Goalkeepers'
  end
  object Label6: TLabel
    Left = 47
    Top = 260
    Width = 61
    Height = 13
    Caption = 'Player rating'
  end
  object Label7: TLabel
    Left = 319
    Top = 260
    Width = 85
    Height = 13
    Caption = 'Goalkeeper rating'
  end
  object Edit1: TEdit
    Left = 112
    Top = 75
    Width = 49
    Height = 21
    TabOrder = 0
    TextHint = 'PAC'
  end
  object Edit2: TEdit
    Left = 112
    Top = 102
    Width = 49
    Height = 21
    TabOrder = 1
    TextHint = 'SHO'
  end
  object Edit3: TEdit
    Left = 112
    Top = 129
    Width = 49
    Height = 21
    TabOrder = 2
    TextHint = 'PAS'
  end
  object Edit4: TEdit
    Left = 408
    Top = 75
    Width = 121
    Height = 21
    TabOrder = 3
    TextHint = 'Diving'
  end
  object Edit5: TEdit
    Left = 408
    Top = 102
    Width = 121
    Height = 21
    TabOrder = 4
    TextHint = 'Hands'
  end
  object Edit6: TEdit
    Left = 408
    Top = 129
    Width = 121
    Height = 21
    TabOrder = 5
    TextHint = 'Speed'
  end
  object Button1: TButton
    Left = 128
    Top = 171
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 6
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 432
    Top = 171
    Width = 75
    Height = 25
    Caption = 'Calculate'
    TabOrder = 7
    OnClick = Button2Click
  end
  object Edit7: TEdit
    Left = 112
    Top = 221
    Width = 121
    Height = 21
    ReadOnly = True
    TabOrder = 8
  end
  object Edit8: TEdit
    Left = 408
    Top = 221
    Width = 121
    Height = 21
    ReadOnly = True
    TabOrder = 9
  end
  object Edit9: TEdit
    Left = 167
    Top = 75
    Width = 49
    Height = 21
    TabOrder = 10
    TextHint = 'DRI'
  end
  object Edit10: TEdit
    Left = 167
    Top = 102
    Width = 49
    Height = 21
    TabOrder = 11
    TextHint = 'DEF'
  end
  object Edit11: TEdit
    Left = 167
    Top = 129
    Width = 49
    Height = 21
    TabOrder = 12
    TextHint = 'PHY'
  end
  object Edit12: TEdit
    Left = 112
    Top = 257
    Width = 49
    Height = 21
    ReadOnly = True
    TabOrder = 13
  end
  object Edit13: TEdit
    Left = 408
    Top = 257
    Width = 41
    Height = 21
    TabOrder = 14
  end
end
