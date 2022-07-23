//---------------------------------------------------------------------------

#include <vcl.h>
#include <string>
#pragma hdrstop

#include "Unit12.h"
#include "tablica1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm12 *Form12;
//---------------------------------------------------------------------------
__fastcall TForm12::TForm12(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm12::Button1Click(TObject *Sender)
{

	TCPClient1->Connect();
		TCPClient1->Socket->Write(Edit2->Text);
		TCPClient1->Socket->Write(Edit3->Text);
		TCPClient1->Socket->Write(Edit4->Text);
		TCPClient1->Socket->Write(Edit5->Text);

		TCPClient1->Socket->Write(Edit6->Text);
		TCPClient1->Socket->Write(Edit7->Text);
		TCPClient1->Socket->Write(Edit8->Text);
		TCPClient1->Socket->Write(Edit9->Text);

    String odg = TCPClient1->Socket->ReadLongWord();
	Edit1->Text = odg;
	TCPClient1->Disconnect();
}

//---------------------------------------------------------------------------

void __fastcall TForm12::IdTCPServer1Execute(TIdContext *AContext)
{
	String tim1 = AContext->Connection->Socket->ReadLongWord();
	int w1 = AContext->Connection->Socket->ReadInt32();
	int d1 = AContext->Connection->Socket->ReadInt32();
	int l1 = AContext->Connection->Socket->ReadInt32();

	String tim2 = AContext->Connection->Socket->ReadLongWord();
	int w2 = AContext->Connection->Socket->ReadInt32();
	int d2 = AContext->Connection->Socket->ReadInt32();
	int l2 = AContext->Connection->Socket->ReadInt32();

	String winner;

	int forma1=w1+d1+l1;
	int forma2=w2+d2+l2;

	double score1=(w1/forma1)+(d1/forma1)-(l1/forma1);
	double score2=(w2/forma2)+(d2/forma2)-(l2/forma2);

	if(score1>score2){
		winner = tim1;
	}else{
        winner = tim2;
    }

	AContext->Connection->Socket->Write(winner);

    AContext->Connection->Disconnect();

}
//---------------------------------------------------------------------------

