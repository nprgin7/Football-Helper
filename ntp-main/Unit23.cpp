//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include "Unit23.h"
#include "Unit22.h"
#pragma package(smart_init)

String Part = "";
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//---------------------------------------------------------------------------
void __fastcall TGenerateCode1::UpdateText()
	  {
		Form22->Edit2->Text = Part;
	  }
//---------------------------------------------------------------------------

__fastcall TGenerateCode1::TGenerateCode1(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall TGenerateCode1::Execute()
{
    FreeOnTerminate = true;
	using namespace std;
    Part = "";
		srand((unsigned) time(0));
		for (int i = 1; i <= 10; i++) {
		Part=Part+(char)(65 + (rand() % 25));
	}

    Synchronize(UpdateText);
}
//---------------------------------------------------------------------------
