object Form14: TForm14
  Left = 0
  Top = 0
  Caption = 'Form14'
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
    Left = 128
    Top = 72
    Width = 52
    Height = 13
    Caption = 'Username:'
  end
  object Label2: TLabel
    Left = 128
    Top = 136
    Width = 50
    Height = 13
    Caption = 'Password:'
  end
  object Label3: TLabel
    Left = 432
    Top = 56
    Width = 52
    Height = 13
    Caption = 'Username:'
  end
  object Label4: TLabel
    Left = 432
    Top = 104
    Width = 50
    Height = 13
    Caption = 'Password:'
  end
  object Label5: TLabel
    Left = 432
    Top = 160
    Width = 88
    Height = 13
    Caption = 'Repeat password:'
  end
  object Edit1: TEdit
    Left = 128
    Top = 96
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 128
    Top = 160
    Width = 121
    Height = 21
    PasswordChar = '*'
    TabOrder = 1
  end
  object Button1: TButton
    Left = 128
    Top = 200
    Width = 121
    Height = 25
    Caption = 'Log in'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Edit3: TEdit
    Left = 432
    Top = 69
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object Edit4: TEdit
    Left = 432
    Top = 123
    Width = 121
    Height = 21
    PasswordChar = '*'
    TabOrder = 4
  end
  object Edit5: TEdit
    Left = 432
    Top = 179
    Width = 121
    Height = 21
    PasswordChar = '*'
    TabOrder = 5
  end
  object Button2: TButton
    Left = 432
    Top = 232
    Width = 121
    Height = 25
    Caption = 'Register'
    TabOrder = 6
    OnClick = Button2Click
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\Filip\Docu' +
      'ments\GitHub\ntp\accounts.mdb;Persist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 80
    Top = 264
  end
  object ADOTableAccounts: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'accounts'
    Left = 152
    Top = 264
  end
end
