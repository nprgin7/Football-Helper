object Form12: TForm12
  Left = 0
  Top = 0
  Caption = 'Form12'
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
    Left = 264
    Top = 104
    Width = 126
    Height = 13
    Caption = 'The all mighty predicitoner'
  end
  object Button1: TButton
    Left = 264
    Top = 128
    Width = 126
    Height = 25
    Caption = 'Get prediction'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 264
    Top = 159
    Width = 126
    Height = 21
    TabOrder = 1
    TextHint = 'All mighty Nico prediction is'
  end
  object Edit2: TEdit
    Left = 72
    Top = 101
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 72
    Top = 144
    Width = 121
    Height = 21
    TabOrder = 3
    Text = 'Edit3'
  end
  object Edit4: TEdit
    Left = 72
    Top = 184
    Width = 121
    Height = 21
    TabOrder = 4
    Text = 'Edit4'
  end
  object Edit5: TEdit
    Left = 72
    Top = 224
    Width = 121
    Height = 21
    TabOrder = 5
    Text = 'Edit5'
  end
  object Edit6: TEdit
    Left = 448
    Top = 101
    Width = 121
    Height = 21
    TabOrder = 6
    Text = 'Edit6'
  end
  object Edit7: TEdit
    Left = 448
    Top = 144
    Width = 121
    Height = 21
    TabOrder = 7
    Text = 'Edit7'
  end
  object Edit8: TEdit
    Left = 448
    Top = 184
    Width = 121
    Height = 21
    TabOrder = 8
    Text = 'Edit8'
  end
  object Edit9: TEdit
    Left = 448
    Top = 224
    Width = 121
    Height = 21
    TabOrder = 9
    Text = 'Edit9'
  end
  object XMLDocument1: TXMLDocument
    Active = True
    FileName = 'C:\Users\Filip\Documents\GitHub\ntp\tablica.xml'
    Left = 560
    Top = 16
  end
  object TCPClient1: TIdTCPClient
    ConnectTimeout = 0
    Host = '127.0.0.1'
    IPVersion = Id_IPv4
    Port = 0
    ReadTimeout = -1
    Left = 624
    Top = 72
  end
  object IdTCPServer1: TIdTCPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 13008
      end>
    DefaultPort = 13008
    OnExecute = IdTCPServer1Execute
    Left = 624
    Top = 24
  end
end
