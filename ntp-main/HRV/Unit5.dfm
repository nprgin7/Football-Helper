object Form5: TForm5
  Left = 0
  Top = 0
  Caption = 'Form5'
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
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 678
    Height = 321
    Align = alClient
    Color = clNavy
    ParentBackground = False
    TabOrder = 11
    ExplicitLeft = 8
    ExplicitTop = 8
    ExplicitWidth = 681
  end
  object ListView1: TListView
    Left = 8
    Top = 8
    Width = 481
    Height = 265
    Columns = <
      item
        AutoSize = True
        Caption = 'Klub'
      end
      item
        AutoSize = True
        Caption = 'Pobjeda'
      end
      item
        AutoSize = True
        Caption = 'Nerijeseno'
      end
      item
        Caption = 'Izgubljeno'
      end
      item
        Caption = 'Bodovi'
      end>
    FlatScrollBars = True
    TabOrder = 0
    ViewStyle = vsReport
  end
  object Ucitaj: TButton
    Left = 8
    Top = 288
    Width = 75
    Height = 25
    Caption = 'Ucitaj timove'
    TabOrder = 1
    OnClick = UcitajClick
  end
  object Button1: TButton
    Left = 528
    Top = 208
    Width = 75
    Height = 25
    Caption = 'Dodaj tim'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 504
    Top = 48
    Width = 121
    Height = 21
    TabOrder = 3
    TextHint = 'Klub'
  end
  object Edit2: TEdit
    Left = 504
    Top = 88
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 4
    TextHint = 'Pobjeda'
  end
  object Edit3: TEdit
    Left = 504
    Top = 128
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 5
    TextHint = 'Nerijeseno'
  end
  object Edit4: TEdit
    Left = 504
    Top = 168
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 6
    TextHint = 'Izgubljeno'
  end
  object Button2: TButton
    Left = 120
    Top = 288
    Width = 75
    Height = 25
    Caption = 'Obrisi tim'
    TabOrder = 7
    OnClick = Button2Click
  end
  object Button4: TButton
    Left = 504
    Top = 239
    Width = 121
    Height = 25
    Caption = 'Spremi promjene'
    TabOrder = 8
    OnClick = Button4Click
  end
  object Button3: TButton
    Left = 232
    Top = 288
    Width = 75
    Height = 25
    Caption = 'Uredi tim'
    TabOrder = 9
    OnClick = Button3Click
  end
  object Button5: TButton
    Left = 344
    Top = 288
    Width = 145
    Height = 25
    Caption = 'Odaberi pobjednika'
    TabOrder = 10
    OnClick = Button5Click
  end
  object XMLDocument1: TXMLDocument
    Active = True
    FileName = 'C:\Users\Filip\Documents\Embarcadero\Studio\Projects\tablica.xml'
    Left = 320
    Top = 136
  end
end
