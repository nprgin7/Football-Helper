object Form26: TForm26
  Left = 0
  Top = 0
  Caption = 'Form26'
  ClientHeight = 321
  ClientWidth = 1144
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
    Top = 51
    Width = 99
    Height = 13
    Caption = 'Enter player'#39's name:'
  end
  object ListBox1: TListBox
    Left = 8
    Top = 96
    Width = 1105
    Height = 185
    ItemHeight = 13
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 156
    Top = 48
    Width = 249
    Height = 21
    TabOrder = 1
  end
  object Button1: TButton
    Left = 424
    Top = 46
    Width = 65
    Height = 25
    Caption = 'Send'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Edit2: TEdit
    Left = 528
    Top = 260
    Width = 121
    Height = 21
    TabOrder = 3
    Text = '127.0.0.1'
    Visible = False
  end
  object IdUDPClient1: TIdUDPClient
    Port = 5121
    Left = 232
    Top = 120
  end
  object IdUDPServer1: TIdUDPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 5120
      end>
    DefaultPort = 5120
    OnUDPRead = IdUDPServer1UDPRead
    Left = 312
    Top = 120
  end
end