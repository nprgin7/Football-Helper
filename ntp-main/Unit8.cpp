//---------------------------------------------------------------------------

#include <vcl.h>
#include <string>
#pragma hdrstop

#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------





void __fastcall TForm8::Button1Click(TObject *Sender)
{
    TPlayers->IndexFieldNames = "Ime DESC";
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button2Click(TObject *Sender)
{
    TPlayers->IndexFieldNames = "Prezime DESC";
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button3Click(TObject *Sender)
{
    TPlayers->IndexFieldNames = "Pozicija DESC";
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button4Click(TObject *Sender)
{
    TPlayers->IndexFieldNames = "Godine DESC";
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button5Click(TObject *Sender)
{
    TPlayers->Filter = Edit1->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button6Click(TObject *Sender)
{
    TPlayers->Filter = "";
}
//---------------------------------------------------------------------------

