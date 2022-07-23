
// ****************************************************************************************** //
//                                                                                          
//                                     XML Data Binding                                     
//                                                                                          
//         Generated on: 18.5.2021. 19:25:34                                                
//       Generated from: C:\Users\Filip\Documents\Embarcadero\Studio\Projects\tablica.xml   
//   Settings stored in: C:\Users\Filip\Documents\Embarcadero\Studio\Projects\tablica.xdb   
//                                                                                          
// ****************************************************************************************** //

#ifndef   tablicaH
#define   tablicaH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLtableType;
typedef System::DelphiInterface<IXMLtableType> _di_IXMLtableType;
__interface IXMLteamType;
typedef System::DelphiInterface<IXMLteamType> _di_IXMLteamType;
__interface IXMLteamTypeList;
typedef System::DelphiInterface<IXMLteamTypeList> _di_IXMLteamTypeList;

// IXMLtableType 

__interface INTERFACE_UUID("{58422F2C-70B4-4B3E-AFB8-FD49A1BBE315}") IXMLtableType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLteamType __fastcall Get_team(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLteamType __fastcall Add() = 0;
  virtual _di_IXMLteamType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLteamType team[int Index] = { read=Get_team };/* default */
};

// IXMLteamType 

__interface INTERFACE_UUID("{C708386A-0AC0-4E7B-A27E-10467EEFE129}") IXMLteamType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_naziv() = 0;
  virtual int __fastcall Get_win() = 0;
  virtual int __fastcall Get_draw() = 0;
  virtual int __fastcall Get_lose() = 0;
  virtual int __fastcall Get_points() = 0;
  virtual void __fastcall Set_naziv(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_win(int Value) = 0;
  virtual void __fastcall Set_draw(int Value) = 0;
  virtual void __fastcall Set_lose(int Value) = 0;
  virtual void __fastcall Set_points(int Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString naziv = { read=Get_naziv, write=Set_naziv };
  __property int win = { read=Get_win, write=Set_win };
  __property int draw = { read=Get_draw, write=Set_draw };
  __property int lose = { read=Get_lose, write=Set_lose };
  __property int points = { read=Get_points, write=Set_points };
};

// IXMLteamTypeList 

__interface INTERFACE_UUID("{CDD5967A-E5E7-4202-9915-644383863974}") IXMLteamTypeList : public Xml::Xmlintf::IXMLNodeCollection
{
public:
  // Methods & Properties 
  virtual _di_IXMLteamType __fastcall Add() = 0;
  virtual _di_IXMLteamType __fastcall Insert(const int Index) = 0;

  virtual _di_IXMLteamType __fastcall Get_Item(int Index) = 0;
  __property _di_IXMLteamType Items[int Index] = { read=Get_Item /* default */ };
};

// Forward Decls 

class TXMLtableType;
class TXMLteamType;
class TXMLteamTypeList;

// TXMLtableType 

class TXMLtableType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLtableType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLtableType 
  virtual _di_IXMLteamType __fastcall Get_team(int Index);
  virtual _di_IXMLteamType __fastcall Add();
  virtual _di_IXMLteamType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLteamType 

class TXMLteamType : public Xml::Xmldoc::TXMLNode, public IXMLteamType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLteamType 
  virtual System::UnicodeString __fastcall Get_naziv();
  virtual int __fastcall Get_win();
  virtual int __fastcall Get_draw();
  virtual int __fastcall Get_lose();
  virtual int __fastcall Get_points();
  virtual void __fastcall Set_naziv(System::UnicodeString Value);
  virtual void __fastcall Set_win(int Value);
  virtual void __fastcall Set_draw(int Value);
  virtual void __fastcall Set_lose(int Value);
  virtual void __fastcall Set_points(int Value);
};

// TXMLteamTypeList 

class TXMLteamTypeList : public Xml::Xmldoc::TXMLNodeCollection, public IXMLteamTypeList
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLteamTypeList 
  virtual _di_IXMLteamType __fastcall Add();
  virtual _di_IXMLteamType __fastcall Insert(const int Index);

  virtual _di_IXMLteamType __fastcall Get_Item(int Index);
};

// Global Functions 

_di_IXMLtableType __fastcall Gettable(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLtableType __fastcall Gettable(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLtableType __fastcall Loadtable(const System::UnicodeString& FileName);
_di_IXMLtableType __fastcall  Newtable();

#define TargetNamespace ""

#endif