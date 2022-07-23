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
void __fastcall TForm11::IdUDPServer1UDPRead(TIdUDPListenerThread *AThread, const TIdBytes AData,
          TIdSocketHandle *ABinding)
{
	UnicodeString poruka = BytesToString(AData);
	bool helper = false;
    String errormessage = "We are sorry, we couldn't find that player in our database!\n Current list of available players is:\n Ronaldo\n David Beckham \n Zinedine Zidane \n Diego Maradona\nPele\nCharles Puyol \n Nicolas Anelka\n Oliver Khan\n Zvonimir Boban\n Ronaldinho";
	String ronaldo = "Ronaldo is a Brazilian football legend,\n he was named The Player of a Year three times and won two Ballon d'Ors,\n He has most appearances for Real Madrid where he played \n striker in 127 matches and scored 83 goals";
	String beckham = "Beckham is a English football legend,\n he won 19 major trophies, He played most games for Manchester United \n where he played midfielder in 265 matches and scored 62 goals";
	String zidane = "Zidane is a French football legend, he was named\n player of the year three times and won a Ballon d'Or,\n he played most games in Real Madrid where he played attacking midfielder\n and appeared in 155 matches and scored 37 goals";
	String maradona = " Maradona was an Argentine football legend,\n he won the Fifa player of the 20thcentury award,\n He played most games for Napoli where he played\n attacking midfielder in188 matches and scored 81 goals";
	String pele = "Pele is a Brazilian football legend,\nhe recieved fifa player of the century award,\n he played 493 matches for Santos where he scored 501 goal";
	String puyol = "Puyol is a Spanish football legend, \nPuyol was a defender for Barcelona where he appeared 392 times and scored 12 goals";
	String anelka = "Anelka is a French football legend,\n he played for 13 clubs but is mostcommonly known for his role \nin Chelsea for which he played a Striker scoring38 goals in 125 matches";
	String kahn = "Kahn was a German football legend,\n he won 4 Uefa best european goalkeeper awards,\nhe played 429 games for Bayern Munich";
	String boban = "Boban is a Croatian football legend,\n he was an attacking midfielder,\nhe played 178 games for Milan where he scored 21 goals";
	String ronaldinho = "Ronaldinho is a Brazilian football legend,\n he won Fifa World Player of the yearand a ballon d'or.\nHe played attacking midfielder for barcelona where\n he played 145 matches and scored 70 goals";



	if(poruka=="ronaldo"){
		IdUDPClient1->SendBuffer(Edit1->Text, 5120, ToBytes(ronaldo));
		helper=true;
	}
	if(poruka=="beckham"){
		IdUDPClient1->SendBuffer(Edit1->Text, 5120, ToBytes(beckham));
        helper=true;
	}
	if(poruka=="zidane"){
		IdUDPClient1->SendBuffer(Edit1->Text, 5120, ToBytes(zidane));
        helper=true;
	}
	if(poruka=="maradona"){
		IdUDPClient1->SendBuffer(Edit1->Text, 5120, ToBytes(maradona));
        helper=true;
	}
	if(poruka=="pele"){
		IdUDPClient1->SendBuffer(Edit1->Text, 5120, ToBytes(pele));
        helper=true;
	}
	if(poruka=="puyol"){
		IdUDPClient1->SendBuffer(Edit1->Text, 5120, ToBytes(puyol));
        helper=true;
	}
	if(poruka=="anelka"){
		IdUDPClient1->SendBuffer(Edit1->Text, 5120, ToBytes(anelka));
        helper=true;
	}
	if(poruka=="kahn"){
		IdUDPClient1->SendBuffer(Edit1->Text, 5120, ToBytes(kahn));
        helper=true;
	}
	if(poruka=="boban"){
		IdUDPClient1->SendBuffer(Edit1->Text, 5120, ToBytes(boban));
        helper=true;
	}
	if(poruka=="ronaldinho"){
		IdUDPClient1->SendBuffer(Edit1->Text, 5120, ToBytes(ronaldinho));
        helper=true;
	}
	if(helper==false){
		IdUDPClient1->SendBuffer(Edit1->Text, 5120, ToBytes(errormessage));
	}
    TThread::Synchronize(TThread::CurrentThread,
    [&](){
        ListBox1->Items->Add(poruka);

	});
}
//---------------------------------------------------------------------------

