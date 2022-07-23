object Form28: TForm28
  Left = 0
  Top = 0
  Caption = 'Form28'
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
  object StringGridBindSourceDB1: TStringGrid
    Tag = 34
    Left = 8
    Top = 8
    Width = 662
    Height = 305
    ColCount = 34
    FixedCols = 0
    TabOrder = 0
    ColWidths = (
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64
      64)
  end
  object RESTClient1: TRESTClient
    Accept = 'application/json, text/plain; q=0.9, text/html;q=0.8,'
    AcceptCharset = 'utf-8, *;q=0.8'
    BaseURL = 'https://apiv2.allsportsapi.com/football'
    Params = <>
    RaiseExceptionOn500 = False
    Left = 576
    Top = 24
  end
  object RESTRequest1: TRESTRequest
    Client = RESTClient1
    Params = <
      item
        Name = 'met'
        Value = 'Livescore'
      end
      item
        Name = 'APIkey'
        Value = 'a9d7d44f58288f8fd0de081a422bdd350383ac7eb66c8eb440b321bf8acda02e'
      end>
    Response = RESTResponse1
    SynchronizedEvents = False
    Left = 576
    Top = 80
  end
  object RESTResponse1: TRESTResponse
    ContentType = 'application/json'
    RootElement = 'result'
    Left = 576
    Top = 144
  end
  object RESTResponseDataSetAdapter1: TRESTResponseDataSetAdapter
    Active = True
    Dataset = FDMemTable1
    FieldDefs = <>
    Response = RESTResponse1
    Left = 576
    Top = 208
  end
  object FDMemTable1: TFDMemTable
    Active = True
    FieldDefs = <
      item
        Name = 'event_key'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_date'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_time'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_home_team'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'home_team_key'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_away_team'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'away_team_key'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_halftime_result'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_final_result'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_ft_result'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_penalty_result'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_status'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'country_name'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'league_name'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'league_key'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'league_round'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'league_season'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_live'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_stadium'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_referee'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'home_team_logo'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'away_team_logo'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_country_key'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'league_logo'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'country_logo'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_home_formation'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'event_away_formation'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'fk_stage_key'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'stage_name'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'goalscorers'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'substitutes'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'cards'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'lineups'
        DataType = ftWideString
        Size = 255
      end
      item
        Name = 'statistics'
        DataType = ftWideString
        Size = 255
      end>
    IndexDefs = <>
    FetchOptions.AssignedValues = [evMode]
    FetchOptions.Mode = fmAll
    ResourceOptions.AssignedValues = [rvSilentMode]
    ResourceOptions.SilentMode = True
    UpdateOptions.AssignedValues = [uvCheckRequired]
    UpdateOptions.CheckRequired = False
    StoreDefs = True
    Left = 576
    Top = 264
  end
  object BindSourceDB1: TBindSourceDB
    DataSet = FDMemTable1
    ScopeMappings = <>
    Left = 336
    Top = 168
  end
  object BindingsList1: TBindingsList
    Methods = <>
    OutputConverters = <>
    Left = 20
    Top = 5
    object LinkGridToDataSourceBindSourceDB1: TLinkGridToDataSource
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      GridControl = StringGridBindSourceDB1
      Columns = <>
    end
  end
end
