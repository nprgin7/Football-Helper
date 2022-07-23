object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Form4'
  ClientHeight = 458
  ClientWidth = 848
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  DesignSize = (
    848
    458)
  PixelsPerInch = 96
  TextHeight = 13
  object StringGridBindSourceDB2: TStringGrid
    Tag = 13
    AlignWithMargins = True
    Left = 0
    Top = 0
    Width = 849
    Height = 457
    Anchors = [akLeft, akTop, akRight, akBottom]
    ColCount = 13
    FixedCols = 0
    RowCount = 2
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
      64)
  end
  object NavigatorBindSourceDB2: TBindNavigator
    Left = 360
    Top = 408
    Width = 240
    Height = 25
    DataSource = BindSourceDB2
    Orientation = orHorizontal
    TabOrder = 1
  end
  object RESTClient1: TRESTClient
    Accept = 'application/json, text/plain; q=0.9, text/html;q=0.8,'
    AcceptCharset = 'utf-8, *;q=0.8'
    BaseURL = 'https://apiv2.allsportsapi.com/football'
    Params = <>
    RaiseExceptionOn500 = False
    Left = 56
    Top = 64
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
    Left = 56
    Top = 136
  end
  object RESTResponse1: TRESTResponse
    ContentType = 'application/json'
    RootElement = 'result'
    Left = 48
    Top = 208
  end
  object RESTResponseDataSetAdapter1: TRESTResponseDataSetAdapter
    Active = True
    Dataset = FDMemTable1
    FieldDefs = <>
    Response = RESTResponse4
    Left = 56
    Top = 280
  end
  object FDMemTable1: TFDMemTable
    Active = True
    FieldDefs = <
      item
        Name = 'result'
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
    Left = 48
    Top = 352
    object FDMemTable1result: TWideStringField
      FieldName = 'result'
      Size = 255
    end
  end
  object BindSourceDB2: TBindSourceDB
    DataSet = FDMemTable1
    ScopeMappings = <>
    Left = 416
    Top = 232
  end
  object BindingsList1: TBindingsList
    Methods = <>
    OutputConverters = <>
    Left = 172
    Top = 93
    object LinkGridToDataSourceRESTResponse4: TLinkGridToDataSource
      Category = 'Quick Bindings'
      DataSource = RESTResponse4
      GridControl = StringGridBindSourceDB2
      Columns = <>
    end
  end
  object RESTClient2: TRESTClient
    Accept = 'application/json, text/plain; q=0.9, text/html;q=0.8,'
    AcceptCharset = 'utf-8, *;q=0.8'
    BaseURL = 'https://apiv2.allsportsapi.com/football'
    Params = <>
    RaiseExceptionOn500 = False
    Left = 360
    Top = 104
  end
  object RESTRequest2: TRESTRequest
    Client = RESTClient2
    Params = <
      item
        Name = 'met'
        Value = 'Livescore'
      end
      item
        Name = 'APIkey'
        Value = 'a9d7d44f58288f8fd0de081a422bdd350383ac7eb66c8eb440b321bf8acda02e'
      end>
    Response = RESTResponse2
    SynchronizedEvents = False
    Left = 456
    Top = 112
  end
  object RESTResponse2: TRESTResponse
    ContentType = 'application/json'
    Left = 544
    Top = 112
  end
  object RESTClient3: TRESTClient
    Accept = 'application/json, text/plain; q=0.9, text/html;q=0.8,'
    AcceptCharset = 'utf-8, *;q=0.8'
    BaseURL = 
      'https://apiv2.allsportsapi.com/football/?met=Livescore&APIkey=a9' +
      'd7d44f58288f8fd0de081a422bdd350383ac7eb66c8eb440b321bf8acda02e'
    Params = <>
    RaiseExceptionOn500 = False
    Left = 280
    Top = 288
  end
  object RESTRequest3: TRESTRequest
    Client = RESTClient3
    Params = <>
    Response = RESTResponse3
    SynchronizedEvents = False
    Left = 280
    Top = 352
  end
  object RESTResponse3: TRESTResponse
    ContentType = 'application/json'
    Left = 280
    Top = 216
  end
  object RESTClient4: TRESTClient
    Accept = 'application/json, text/plain; q=0.9, text/html;q=0.8,'
    AcceptCharset = 'utf-8, *;q=0.8'
    BaseURL = 
      'https://apiv2.allsportsapi.com/football/?met=Livescore&APIkey=a9' +
      'd7d44f58288f8fd0de081a422bdd350383ac7eb66c8eb440b321bf8acda02e'
    Params = <>
    RaiseExceptionOn500 = False
    Left = 576
    Top = 256
  end
  object RESTRequest4: TRESTRequest
    Client = RESTClient4
    Params = <>
    Response = RESTResponse4
    SynchronizedEvents = False
    Left = 664
    Top = 240
  end
  object RESTResponse4: TRESTResponse
    ContentType = 'application/json'
    RootElement = 'result'
    Left = 584
    Top = 328
  end
end
