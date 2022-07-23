//---------------------------------------------------------------------------

#ifndef Unit26H
#define Unit26H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
#include <IdUDPServer.hpp>
#include <IdGlobal.hpp>
#include <IdSocketHandle.hpp>
//---------------------------------------------------------------------------
class TForm26 : public TForm
{
__published:	// IDE-managed Components
	TIdUDPClient *IdUDPClient1;
	TIdUDPServer *IdUDPServer1;
	TListBox *ListBox1;
	TEdit *Edit1;
	TButton *Button1;
	TLabel *Label1;
	TEdit *Edit2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall IdUDPServer1UDPRead(TIdUDPListenerThread *AThread, const TIdBytes AData,
          TIdSocketHandle *ABinding);
private:	// User declarations
public:		// User declarations
	__fastcall TForm26(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm26 *Form26;
//---------------------------------------------------------------------------
#endif
