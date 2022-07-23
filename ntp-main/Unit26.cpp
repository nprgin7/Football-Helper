//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit26.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm26 *Form26;
//---------------------------------------------------------------------------
__fastcall TForm26::TForm26(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm26::Button1Click(TObject *Sender)
{
    IdUDPClient1->SendBuffer(Edit2->Text, 5121, ToBytes(Edit1->Text));
}
//---------------------------------------------------------------------------
void __fastcall TForm26::IdUDPServer1UDPRead(TIdUDPListenerThread *AThread, const TIdBytes AData,
          TIdSocketHandle *ABinding)
{
	UnicodeString podaci = BytesToString(AData);

	ListBox1->Items->Add(podaci);

}
//---------------------------------------------------------------------------
