//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit19.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#pragma link "IdBaseComponent"
#pragma link "IdComponent"
#pragma link "IdContext"
#pragma link "IdCustomTCPServer"
#pragma link "IdTCPClient"
#pragma link "IdTCPConnection"
#pragma link "IdTCPServer"
#pragma link "IdIPWatch"
TForm19 *Form19;
//---------------------------------------------------------------------------
__fastcall TForm19::TForm19(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm19::Button1Click(TObject *Sender)
{
	IdTCPClient1->Host = Edit2->Text;
	if (IdTCPClient1->Connected()) {
		IdTCPClient1->Disconnect();
		Button1->Caption = "HelpBot";
        return;
    }
    try {
        IdTCPClient1->Connect();
        Button1->Caption = "Disconnect";
    }
    catch(...) {
        ShowMessage("Unable to connect...");
    }
}

void __fastcall TForm19::SendClick(TObject *Sender)
{
	UnicodeString Message = "Football Player #1: " + Edit1->Text;
	IdTCPClient1->Socket->WriteLn(Message);
}
//---------------------------------------------------------------------------
void __fastcall TForm19::IdTCPServer1Execute(TIdContext *AContext)
{
	UnicodeString message = AContext->Connection->Socket->ReadLn();
    TThread::Synchronize(TThread::CurrentThread,
    [&](){
        ListBox1->Items->Add(message);
    });
    AContext->Connection->Disconnect();
}
//---------------------------------------------------------------------------
