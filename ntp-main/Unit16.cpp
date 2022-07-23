//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string.h>
#include "Unit16.h"
#include "calculator.h"
#include <File1.cpp>
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm16 *Form16;

//---------------------------------------------------------------------------
__fastcall TForm16::TForm16(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm16::Button1Click(TObject *Sender)
{
	_di_CalculatorSoap calculatePlayer = GetCalculatorSoap();
	double playerOne = calculatePlayer->Add(Edit1->Text.ToDouble(), Edit2->Text.ToDouble());
	playerOne = calculatePlayer->Add(playerOne, Edit3->Text.ToInt());

	double playerTwo = calculatePlayer->Add(Edit4->Text.ToDouble(), Edit5->Text.ToDouble());
	playerTwo = calculatePlayer->Add(playerTwo, Edit6->Text.ToInt());

	String playerOneName = Edit7->Text;
	String playerTwoName = Edit8->Text;

	compr PlayerVsPlayer(playerOneName, playerOne, playerTwoName, playerTwo);
	double temp1 = PlayerVsPlayer.calculateAvg();
	ShowMessage("Better player is " + PlayerVsPlayer.betterPlayer() + " with total score of " + (int)temp1);


}
//---------------------------------------------------------------------------
