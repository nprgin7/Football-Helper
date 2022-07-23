#include <vcl.h>
#pragma hdrstop

#include "Unit13.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm13 *Form13;
//---------------------------------------------------------------------------
__fastcall TForm13::TForm13(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Button1Click(TObject *Sender)
{
        TCPClient54->Host = "127.0.0.1";
		TCPClient54->Port = 13008;
	   	TCPClient54->Connect();

		TCPClient54->Socket->Write(Edit2->Text.ToInt());
		TCPClient54->Socket->Write(Edit3->Text.ToInt());
		TCPClient54->Socket->Write(Edit4->Text.ToInt());


		TCPClient54->Socket->Write(Edit6->Text.ToInt());
		TCPClient54->Socket->Write(Edit7->Text.ToInt());
		TCPClient54->Socket->Write(Edit8->Text.ToInt());

		if(TCPClient54->Socket->ReadInt32() == 1){
			Edit9->Text = Edit1->Text;
		}else{
            Edit9->Text = Edit5->Text;
        }
		TCPClient54->Disconnect();
}
//---------------------------------------------------------------------------

void __fastcall TForm13::TCPServer54Execute(TIdContext *AContext)
{

    int w1 = AContext->Connection->Socket->ReadInt32();
    int d1 = AContext->Connection->Socket->ReadInt32();
    int l1 = AContext->Connection->Socket->ReadInt32();


    int w2 = AContext->Connection->Socket->ReadInt32();
    int d2 = AContext->Connection->Socket->ReadInt32();
	int l2 = AContext->Connection->Socket->ReadInt32();

	double score1=w1*3+d1-l1;
	double score2=w2*3+d2-l2;

	int winner;
    if(score1>score2){
		winner = 1;
	}else{
		winner = 2;
    }

    AContext->Connection->Socket->Write(winner);

    AContext->Connection->Disconnect();
}
//---------------------------------------------------------------------------

