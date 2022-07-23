//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include "Unit24.h"
#include "Unit22.h"
#pragma package(smart_init)

String Part2 = "";
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
void __fastcall TGenerateCode2::UpdateText2()
{
        Form22->Edit3->Text = Part2;
}
//---------------------------------------------------------------------------

__fastcall TGenerateCode2::TGenerateCode2(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall TGenerateCode2::Execute()
{
    FreeOnTerminate = true;
	using namespace std;
    int rando;
		srand((unsigned) time(0));
		rando= 1000000 + (rand() % 9000000);
		Part2 = rando;


    Synchronize(UpdateText2);
}
//---------------------------------------------------------------------------
