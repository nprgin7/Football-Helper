// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "IdBaseComponent"
#pragma link "IdComponent"
#pragma link "IdContext"
#pragma link "IdCustomTCPServer"
#pragma link "IdTCPClient"
#pragma link "IdTCPConnection"
#pragma link "IdTCPServer"
#pragma link "IdIPWatch"
#pragma resource "*.dfm"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::BConClick(TObject *Sender) {
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

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) {
	// send message to chat server
	UnicodeString Message = ENick->Text + ": " + EMessage->Text;
	IdTCPClient1->Socket->WriteLn(Message);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::IdTCPServer1Execute(TIdContext *AContext) {
	// get response
	UnicodeString message = AContext->Connection->Socket->ReadLn();
	TThread::Synchronize(TThread::CurrentThread,
	[&](){
		ListBox1->Items->Add(message);
		ListBox1->ItemIndex = ListBox1->Count - 1; // select incoming message
	});
	AContext->Connection->Disconnect();
}
// ---------------------------------------------------------------------------


