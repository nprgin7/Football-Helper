object Form21: TForm21
  Left = 0
  Top = 0
  Caption = 'Form21'
  ClientHeight = 321
  ClientWidth = 678
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 456
    Top = 128
    Width = 105
    Height = 105
  end
  object EChatServer: TEdit
    Left = 48
    Top = 32
    Width = 121
    Height = 21
    TabOrder = 0
    Text = '127.0.0.1'
    Visible = False
  end
  object ENick: TEdit
    Left = 48
    Top = 72
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'ENick'
    Visible = False
  end
  object BCon: TButton
    Left = 192
    Top = 30
    Width = 75
    Height = 25
    Caption = 'Connect'
    TabOrder = 2
    OnClick = BConClick
  end
  object ListBox1: TListBox
    Left = 48
    Top = 120
    Width = 305
    Height = 129
    ItemHeight = 13
    TabOrder = 3
  end
  object EMessage: TEdit
    Left = 48
    Top = 272
    Width = 121
    Height = 21
    TabOrder = 4
    TextHint = 'Message'
  end
  object Button1: TButton
    Left = 192
    Top = 270
    Width = 75
    Height = 25
    Caption = 'Send'
    TabOrder = 5
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 488
    Top = 239
    Width = 41
    Height = 25
    Caption = '?'
    TabOrder = 6
    OnClick = Button2Click
  end
  object IdTCPClient1: TIdTCPClient
    ConnectTimeout = 0
    IPVersion = Id_IPv4
    Port = 12346
    ReadTimeout = -1
    Left = 400
    Top = 144
  end
  object IdTCPServer1: TIdTCPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 12345
      end>
    DefaultPort = 12345
    OnExecute = IdTCPServer1Execute
    Left = 472
    Top = 144
  end
end
