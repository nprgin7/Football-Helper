
#include <vcl.h>
#include <memory>
#include <vector>
#include <string>
#pragma hdrstop
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;

__fastcall TForm9::TForm9(TComponent* Owner)
: TForm(Owner)
{
}
class footballStadium {
public:
wchar_t name[15];
float version;
	footballStadium() {
		wcsncpy(name, L"footballStadium", 15);
		version = 1.0;
	}
};

class Stadium {
public:
	wchar_t capacity[25], location[50], name[25];
	Stadium() = default;
	Stadium(const wchar_t* _name, const wchar_t* _capacity, const wchar_t* _location) {
		wcsncpy(name, _name, 25);
		wcsncpy(capacity, _capacity, 25);
		wcsncpy(location, _location, 50);
	}
};

void __fastcall TForm9::Button1Click(TObject *Sender)
{
// create contacts
	String str = Edit1->Text;
	std::wstring widestr=std::wstring(str.begin(), str.end());
	const wchar_t* widecstr = widestr.c_str();

	String str2 = Edit2->Text;
	std::wstring widestr2=std::wstring(str2.begin(), str2.end());
	const wchar_t* widecstr2 = widestr2.c_str();

	String str3 = Edit3->Text;
	std::wstring widestr3=std::wstring(str3.begin(), str3.end());
	const wchar_t* widecstr3 = widestr3.c_str();
	std::vector<Stadium> stadiums =
	{
	Stadium(widecstr,widecstr2,widecstr3)

	};
	footballStadium Header;
	std::unique_ptr<TFileStream> stadiumsStream(new TFileStream("stadiums.mff", fmCreate));
	stadiumsStream->Write(&Header, sizeof(footballStadium));
	for (int i = 0; i < stadiums.size(); i++)
	stadiumsStream->Write(&stadiums[i], sizeof(Stadium));

	if((Edit1->Text)=="" && (Edit2->Text)=="" && (Edit3->Text)==""){
		ShowMessage("Niste unijeli sva polja!");
	}else{
		ShowMessage("Stadium added!");
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button2Click(TObject *Sender)
{

	std::unique_ptr<TMemoryStream> stadiumsStream(new TMemoryStream);
	stadiumsStream->LoadFromFile("stadiums.mff");
	footballStadium Header;
	stadiumsStream->Read(&Header, sizeof(footballStadium));

    	if((Header.version != 1.0) && String(Header.name)!="footballStadium"){
		ShowMessage("Wrong format!");
		return;
	}
	Stadium tmp;
	int stadiumsCount = (stadiumsStream->Size - sizeof(Header)) / sizeof(Stadium);
		for(int i = 0; i < stadiumsCount; i++){
		UnicodeString stadium;
		stadiumsStream->Read(&tmp, sizeof(Stadium));
		stadium += String(tmp.name) + " ,";
		stadium += String(tmp.capacity) + " ,";
		stadium += String(tmp.location);
		ShowMessage(stadium);
		}
}


