//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "majdll.h"

#include "Unit17.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm17 *Form17;
//---------------------------------------------------------------------------
__fastcall TForm17::TForm17(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm17::Button1Click(TObject *Sender)
{
	Clubs nico(Edit1->Text,Edit5->Text,Edit2->Text.ToDouble(),Edit6->Text.ToDouble(),Edit3->Text.ToDouble(),Edit7->Text.ToDouble(),Edit4->Text.ToDouble(),Edit8->Text.ToDouble());
	nico.calculatePoints();
    Edit9->Text = nico.betterClub();
}
//---------------------------------------------------------------------------
