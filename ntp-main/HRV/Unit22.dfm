object Form22: TForm22
  Left = 0
  Top = 0
  Caption = 'Form22'
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
    Left = 256
    Top = 206
    Width = 129
    Height = 25
    Caption = 'Generiraj kod'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 216
    Top = 128
    Width = 225
    Height = 41
    ReadOnly = True
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 136
    Top = 48
    Width = 121
    Height = 21
    ReadOnly = True
    TabOrder = 2
    Visible = False
  end
  object Edit3: TEdit
    Left = 288
    Top = 48
    Width = 121
    Height = 21
    ReadOnly = True
    TabOrder = 3
    Visible = False
  end
  object Edit4: TEdit
    Left = 440
    Top = 48
    Width = 121
    Height = 21
    ReadOnly = True
    TabOrder = 4
    Visible = False
  end
  object Button2: TButton
    Left = 288
    Top = 175
    Width = 75
    Height = 25
    Caption = 'Pokazi kod'
    TabOrder = 5
    OnClick = Button2Click
  end
end
