//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
double ukupno;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	TFileStream* fs = new TFileStream(GetCurrentDir()+"\\hns.jpg", fmCreate);
    Download->Get(Edit1->Text, fs);
    delete fs;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Image1Click(TObject *Sender)
{
	Image1->Picture->LoadFromFile("Images/hns.jpg" );
}
//---------------------------------------------------------------------------
void __fastcall TForm6::DownloadWorkBegin(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCountMax)

{
	ProgressBar1->Position = 0;
	ProgressBar1->Max = AWorkCountMax;
    ukupno = AWorkCountMax;

}
//---------------------------------------------------------------------------
void __fastcall TForm6::DownloadWork(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCount)

{
		ProgressBar1->Position = AWorkCount;
		Application->ProcessMessages();
		Label2->Caption = (int)((AWorkCount/ukupno)*100);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button2Click(TObject *Sender)
{
	Download->Disconnect();
    ProgressBar1->Position = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::RadioButton1Click(TObject *Sender)
{
    Throttler1->BitsPerSec = 819200;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::RadioButton2Click(TObject *Sender)
{
    Throttler1->BitsPerSec = 4096000;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::RadioButton3Click(TObject *Sender)
{
    Throttler1->BitsPerSec = 0;
}
//---------------------------------------------------------------------------



