//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit11.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm11 *Form11;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm11::IdTCPServer1Execute(TIdContext *AContext)
{
	UnicodeString message = AContext->Connection->Socket->ReadLn();
    bool helper = false;
	String help = "HelpBot: You can use this commands to get \n some help: !compare, !nico, !stadium, !tournament,\n !livescore or !help";
	String compare = "HelpBot: Compare players require user input like: \nName, attack rating, defence rating and pace overall rating and \nwill give you overall score based on the input data";
	String nico = "HelpBot: Nico Predicto is our latest prediction bot that \nwill give you his predicition for the winner of the duel.\n Just put in the club names and their recent stats";
	String stadium = "HelpBot: Create your own stadium and upload \nit to your Football Fantasy league!";
	String tournament = "HelpBot: Create your own tournament and \nreach the first place! Best of luck!";
	String livescore = "HelpBot: Our livescore will give you the \nmost recent football stats, covering \nmajority of football leagues";
    TList *list = IdTCPServer1->Contexts->LockList();
    for (int i = 0; i < list->Count; i++) {
        TIdServerContext *peer = (TIdServerContext*)list->Items[i];
        IdTCPClient1->Host = peer->Connection->Socket->Binding->PeerIP;
        try{
            IdTCPClient1->Connect();
        }
        catch(...){
            continue;
		}
		if(message=="!help"){
		IdTCPClient1->Socket->WriteLn(help);
		IdTCPClient1->Disconnect();
		helper = true;
		}
		if(message=="!nico"){
		IdTCPClient1->Socket->WriteLn(nico);
		IdTCPClient1->Disconnect();
		helper = true;
		}
		if(message=="!stadium"){
		IdTCPClient1->Socket->WriteLn(stadium);
		IdTCPClient1->Disconnect();
		helper = true;
		}
		if(message=="!tournament"){
		IdTCPClient1->Socket->WriteLn(tournament);
		IdTCPClient1->Disconnect();
		helper = true;
		}
		if(message=="!livescore"){
		IdTCPClient1->Socket->WriteLn(livescore);
		IdTCPClient1->Disconnect();
		helper = true;
		}
		if(message=="!compare"){
		IdTCPClient1->Socket->WriteLn(compare);
		IdTCPClient1->Disconnect();
        helper = true;
		}
		if(helper==false){
		IdTCPClient1->Socket->WriteLn(help);
		IdTCPClient1->Disconnect();
		}

    IdTCPServer1->Contexts->UnlockList();


    TThread::Synchronize(TThread::CurrentThread,
    [&](){
		ListBox1->Items->Add(message);

    });
	}
}
//---------------------------------------------------------------------------
