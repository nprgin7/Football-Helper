//---------------------------------------------------------------------------

#ifndef Unit23H
#define Unit23H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class TGenerateCode1 : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall TGenerateCode1(bool CreateSuspended);
    void __fastcall UpdateText();
};
//---------------------------------------------------------------------------
#endif
