object Form15: TForm15
  Left = 0
  Top = 0
  Caption = 'Form15'
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
    Left = 56
    Top = 32
    Width = 3
    Height = 13
  end
  object Label2: TLabel
    Left = 56
    Top = 104
    Width = 170
    Height = 13
    Caption = 'Enter your Credit Card information:'
  end
  object Edit1: TEdit
    Left = 56
    Top = 136
    Width = 170
    Height = 21
    NumbersOnly = True
    TabOrder = 0
    TextHint = 'CC Number'
  end
  object Button1: TButton
    Left = 121
    Top = 243
    Width = 105
    Height = 25
    Caption = 'Purchase'
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 240
    Top = 136
    Width = 33
    Height = 21
    NumbersOnly = True
    TabOrder = 2
    TextHint = 'CVV'
  end
  object Edit3: TEdit
    Left = 56
    Top = 176
    Width = 129
    Height = 21
    TabOrder = 3
    TextHint = 'First Name'
  end
  object Edit4: TEdit
    Left = 56
    Top = 203
    Width = 129
    Height = 21
    TabOrder = 4
    TextHint = 'Last Name'
  end
  object Button2: TButton
    Left = 408
    Top = 152
    Width = 75
    Height = 25
    Caption = 'Button2'
    TabOrder = 5
    Visible = False
  end
end
