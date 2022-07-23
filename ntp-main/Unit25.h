//---------------------------------------------------------------------------

#ifndef Unit25H
#define Unit25H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class TGenerateCode3 : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall TGenerateCode3(bool CreateSuspended);
    void __fastcall UpdateText3();
};
//---------------------------------------------------------------------------
#endif
