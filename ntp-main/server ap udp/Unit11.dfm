object Form11: TForm11
  Left = 0
  Top = 0
  Caption = 'Form11'
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
  object ListBox1: TListBox
    Left = 72
    Top = 72
    Width = 353
    Height = 209
    ItemHeight = 13
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 480
    Top = 208
    Width = 121
    Height = 21
    TabOrder = 1
    Text = '127.0.0.1'
  end
  object IdUDPClient1: TIdUDPClient
    Port = 5120
    Left = 176
    Top = 152
  end
  object IdUDPServer1: TIdUDPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 5121
      end>
    DefaultPort = 5121
    ThreadedEvent = True
    OnUDPRead = IdUDPServer1UDPRead
    Left = 256
    Top = 152
  end
end
