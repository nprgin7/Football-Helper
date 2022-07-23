
// ****************************************************************************************** //
//                                                                                          
//                                     XML Data Binding                                     
//                                                                                          
//         Generated on: 4.6.2021. 15:53:30                                                 
//       Generated from: C:\Users\Filip\Documents\Embarcadero\Studio\Projects\tablica.xml   
//   Settings stored in: C:\Users\Filip\Documents\GitHub\ntp\tablica.xdb                    
//                                                                                          
// ****************************************************************************************** //

#include <System.hpp>
#pragma hdrstop

#include "tablica1.h"


// Global Functions 

_di_IXMLtableType __fastcall Gettable(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLtableType) Doc->GetDocBinding("table", __classid(TXMLtableType), TargetNamespace);
};

_di_IXMLtableType __fastcall Gettable(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Gettable(DocIntf);
};

_di_IXMLtableType __fastcall Loadtable(const System::UnicodeString& FileName)
{
  return (_di_IXMLtableType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("table", __classid(TXMLtableType), TargetNamespace);
};

_di_IXMLtableType __fastcall  Newtable()
{
  return (_di_IXMLtableType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("table", __classid(TXMLtableType), TargetNamespace);
};

// TXMLtableType 

void __fastcall TXMLtableType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("team"), __classid(TXMLteamType));
  ItemTag = "team";
  ItemInterface = __uuidof(IXMLteamType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLteamType __fastcall TXMLtableType::Get_team(int Index)
{
  return (_di_IXMLteamType) List->Nodes[Index];
};

_di_IXMLteamType __fastcall TXMLtableType::Add()
{
  return (_di_IXMLteamType) AddItem(-1);
};

_di_IXMLteamType __fastcall TXMLtableType::Insert(const int Index)
{
  return (_di_IXMLteamType) AddItem(Index);
};

// TXMLteamType 

System::UnicodeString __fastcall TXMLteamType::Get_naziv()
{
  return GetChildNodes()->Nodes[System::UnicodeString("naziv")]->Text;
};

void __fastcall TXMLteamType::Set_naziv(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("naziv")]->NodeValue = Value;
};

int __fastcall TXMLteamType::Get_win()
{
  return GetChildNodes()->Nodes[System::UnicodeString("win")]->NodeValue.operator int();
};

void __fastcall TXMLteamType::Set_win(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("win")]->NodeValue = Value;
};

int __fastcall TXMLteamType::Get_draw()
{
  return GetChildNodes()->Nodes[System::UnicodeString("draw")]->NodeValue.operator int();
};

void __fastcall TXMLteamType::Set_draw(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("draw")]->NodeValue = Value;
};

int __fastcall TXMLteamType::Get_lose()
{
  return GetChildNodes()->Nodes[System::UnicodeString("lose")]->NodeValue.operator int();
};

void __fastcall TXMLteamType::Set_lose(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("lose")]->NodeValue = Value;
};

int __fastcall TXMLteamType::Get_points()
{
  return GetChildNodes()->Nodes[System::UnicodeString("points")]->NodeValue.operator int();
};

void __fastcall TXMLteamType::Set_points(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("points")]->NodeValue = Value;
};

// TXMLteamTypeList 

_di_IXMLteamType __fastcall TXMLteamTypeList::Add()
{
  return (_di_IXMLteamType) AddItem(-1);
};

_di_IXMLteamType __fastcall TXMLteamTypeList::Insert(const int Index)
{
  return (_di_IXMLteamType) AddItem(Index);
};

_di_IXMLteamType __fastcall TXMLteamTypeList::Get_Item(int Index)
{
  return (_di_IXMLteamType) List->Nodes[Index];
};
