object Form8: TForm8
  Left = 0
  Top = 0
  Caption = 'Form8'
  ClientHeight = 435
  ClientWidth = 798
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
    Left = 8
    Top = 208
    Width = 18
    Height = 13
    Caption = 'Ime'
    FocusControl = DBEdit1
  end
  object Label2: TLabel
    Left = 8
    Top = 248
    Width = 37
    Height = 13
    Caption = 'Prezime'
    FocusControl = DBEdit2
  end
  object Label3: TLabel
    Left = 8
    Top = 288
    Width = 35
    Height = 13
    Caption = 'Pozicija'
  end
  object Label4: TLabel
    Left = 8
    Top = 328
    Width = 33
    Height = 13
    Caption = 'Godine'
    FocusControl = DBEdit4
  end
  object Label5: TLabel
    Left = 376
    Top = 245
    Width = 39
    Height = 13
    Caption = 'Poredaj po:'
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 8
    Width = 505
    Height = 177
    DataSource = DPlayers
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'Ime'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Prezime'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Pozicija'
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Godine'
        Visible = True
      end>
  end
  object DBEdit1: TDBEdit
    Left = 8
    Top = 227
    Width = 240
    Height = 21
    DataField = 'Ime'
    DataSource = DPlayers
    TabOrder = 1
  end
  object DBEdit2: TDBEdit
    Left = 8
    Top = 264
    Width = 240
    Height = 21
    DataField = 'Prezime'
    DataSource = DPlayers
    TabOrder = 2
  end
  object DBEdit4: TDBEdit
    Left = 8
    Top = 344
    Width = 240
    Height = 21
    DataField = 'Godine'
    DataSource = DPlayers
    TabOrder = 3
  end
  object DBNavigator1: TDBNavigator
    Left = 8
    Top = 384
    Width = 240
    Height = 25
    DataSource = DPlayers
    TabOrder = 4
  end
  object DBLookupComboBox1: TDBLookupComboBox
    Left = 8
    Top = 301
    Width = 240
    Height = 21
    DataField = 'Pozicija'
    DataSource = DPlayers
    KeyField = 'Pozicija'
    ListField = 'Pozicija'
    ListSource = DPosition
    TabOrder = 5
  end
  object Button1: TButton
    Left = 376
    Top = 264
    Width = 75
    Height = 25
    Caption = 'Ime'
    TabOrder = 6
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 376
    Top = 295
    Width = 75
    Height = 25
    Caption = 'Prezime'
    TabOrder = 7
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 376
    Top = 326
    Width = 75
    Height = 25
    Caption = 'Pozicija'
    TabOrder = 8
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 376
    Top = 357
    Width = 75
    Height = 25
    Caption = 'Godine'
    TabOrder = 9
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 552
    Top = 291
    Width = 67
    Height = 25
    Caption = 'Primjeni'
    TabOrder = 10
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 632
    Top = 291
    Width = 65
    Height = 25
    Caption = 'Reset'
    TabOrder = 11
    OnClick = Button6Click
  end
  object Edit1: TEdit
    Left = 552
    Top = 264
    Width = 145
    Height = 21
    TabOrder = 12
    TextHint = 'Unesi filter...'
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=postava.mdb;Persist' +
      ' Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 576
    Top = 144
  end
  object TPlayers: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Filtered = True
    TableName = 'igraci'
    Left = 544
    Top = 16
    object TPlayersID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object TPlayersIme: TWideStringField
      FieldName = 'Ime'
      Size = 255
    end
    object TPlayersPrezime: TWideStringField
      FieldName = 'Prezime'
      Size = 255
    end
    object TPlayersPozicija: TWideStringField
      FieldName = 'Pozicija'
      Size = 255
    end
    object TPlayersGodine: TIntegerField
      FieldName = 'Godine'
    end
  end
  object TPosition: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'pozicija'
    Left = 616
    Top = 16
  end
  object DPlayers: TDataSource
    DataSet = TPlayers
    Left = 544
    Top = 80
  end
  object DPosition: TDataSource
    DataSet = TPosition
    Left = 616
    Top = 80
  end
end
