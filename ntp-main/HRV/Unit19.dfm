object Form19: TForm19
  Left = 0
  Top = 0
  Caption = 'Form19'
  ClientHeight = 321
  ClientWidth = 599
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 40
    Top = 136
    Width = 417
    Height = 177
    Lines.Strings = (
      'Memo1')
    TabOrder = 0
    Visible = False
  end
  object Edit1: TEdit
    Left = 40
    Top = 76
    Width = 322
    Height = 21
    TabOrder = 1
  end
  object Send: TButton
    Left = 368
    Top = 76
    Width = 89
    Height = 21
    Caption = 'Posalji'
    TabOrder = 2
    OnClick = SendClick
  end
  object ListBox1: TListBox
    Left = 40
    Top = 136
    Width = 417
    Height = 177
    ItemHeight = 13
    TabOrder = 3
  end
  object Button1: TButton
    Left = 200
    Top = 29
    Width = 105
    Height = 25
    Caption = 'Pozovi HelpBota'
    TabOrder = 4
  end
  object Edit2: TEdit
    Left = 56
    Top = 31
    Width = 121
    Height = 21
    TabOrder = 5
    Text = '127.0.0.1'
  end
  object IdTCPClient1: TIdTCPClient
    ConnectTimeout = 0
    IPVersion = Id_IPv4
    Port = 12000
    ReadTimeout = -1
    Left = 280
    Top = 32
  end
  object IdTCPServer1: TIdTCPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 12001
      end>
    DefaultPort = 12001
    OnExecute = IdTCPServer1Execute
    Left = 328
    Top = 32
  end
end