//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include "Unit25.h"
#include "Unit22.h"
#pragma package(smart_init)

String Part3 = "";
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
void __fastcall TGenerateCode3::UpdateText3()
	  {
		Form22->Edit4->Text = Part3;
	  }
//---------------------------------------------------------------------------

__fastcall TGenerateCode3::TGenerateCode3(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall TGenerateCode3::Execute()
{
    FreeOnTerminate = true;
	using namespace std;
	Part3 = "";
		srand((unsigned) time(0));
		for (int i = 1; i <= 5; i++) {
		Part3=Part3+(char)(33 + (rand() % 14));
	}

	Synchronize(UpdateText3);
}
//---------------------------------------------------------------------------
