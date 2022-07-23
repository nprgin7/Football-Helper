//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit21.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm21 *Form21;
HINSTANCE CardsDLL;

boolean state = true;
//---------------------------------------------------------------------------
__fastcall TForm21::TForm21(TComponent* Owner)
	: TForm(Owner)
{
}
// ---------------------------------------------------------------------------
void __fastcall TForm21::BConClick(TObject *Sender)
{
    	// connect to chat server
	IdTCPClient1->Host = EChatServer->Text;
	if (IdTCPClient1->Connected()) {
		IdTCPClient1->Disconnect();
		BCon->Caption = "Connect";
		return;
	}
	try {
		IdTCPClient1->Connect();
		BCon->Caption = "Disconnect";
	}
	catch(...) {
		ShowMessage("Unable to connect...");
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm21::Button1Click(TObject *Sender)
{
    // send message to chat server
	UnicodeString Message = EMessage->Text;
	IdTCPClient1->Socket->WriteLn(Message);
}
//---------------------------------------------------------------------------
void __fastcall TForm21::IdTCPServer1Execute(TIdContext *AContext)
{
     // get response
	UnicodeString message = AContext->Connection->Socket->ReadLn();
	TThread::Synchronize(TThread::CurrentThread,
	[&](){
		ListBox1->Items->Add(message);
		ListBox1->ItemIndex = ListBox1->Count - 1; // select incoming message
	});
	AContext->Connection->Disconnect();
}
//---------------------------------------------------------------------------
void __fastcall TForm21::FormCreate(TObject *Sender)
{
	CardsDLL = LoadLibraryW(L"cards.dll");
	Image1->Picture->Bitmap->LoadFromResourceID((unsigned)CardsDLL, 681);
}
//---------------------------------------------------------------------------

void __fastcall TForm21::FormClose(TObject *Sender, TCloseAction &Action)
{
        FreeLibrary(CardsDLL);
}
//---------------------------------------------------------------------------


void __fastcall TForm21::Button2Click(TObject *Sender)
{
	  state = !state;
	if(state){
        Image1->Picture->Bitmap->LoadFromResourceID((unsigned)CardsDLL, 681);
    }else{
    Image1->Picture->Bitmap->LoadFromResourceID((unsigned)CardsDLL, 682);}
}
//---------------------------------------------------------------------------

