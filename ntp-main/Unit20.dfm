object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Chat client'
  ClientHeight = 248
  ClientWidth = 370
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 61
    Height = 13
    Caption = 'Chat server:'
  end
  object Label2: TLabel
    Left = 18
    Top = 218
    Width = 46
    Height = 13
    Caption = 'Message:'
  end
  object Nick: TLabel
    Left = 16
    Top = 48
    Width = 23
    Height = 13
    Caption = 'Nick:'
  end
  object ListBox1: TListBox
    Left = 18
    Top = 80
    Width = 337
    Height = 129
    ItemHeight = 13
    TabOrder = 0
  end
  object EChatServer: TEdit
    Left = 83
    Top = 13
    Width = 166
    Height = 21
    TabOrder = 1
    Text = '127.0.0.1'
  end
  object EMessage: TEdit
    Left = 70
    Top = 215
    Width = 213
    Height = 21
    TabOrder = 2
  end
  object Button1: TButton
    Left = 289
    Top = 215
    Width = 66
    Height = 25
    Caption = 'Send'
    TabOrder = 3
    OnClick = Button1Click
  end
  object BCon: TButton
    Left = 255
    Top = 38
    Width = 100
    Height = 25
    Caption = 'Connect'
    TabOrder = 4
    OnClick = BConClick
  end
  object ENick: TEdit
    Left = 83
    Top = 40
    Width = 166
    Height = 21
    TabOrder = 5
    Text = 'Client'
  end
  object IdTCPClient1: TIdTCPClient
    ConnectTimeout = 0
    IPVersion = Id_IPv4
    Port = 12000
    ReadTimeout = -1
    Left = 130
    Top = 96
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
    Left = 56
    Top = 96
  end
end
