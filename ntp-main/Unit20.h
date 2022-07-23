//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "IdBaseComponent.hpp"
#include "IdComponent.hpp"
#include "IdContext.hpp"
#include "IdCustomTCPServer.hpp"
#include "IdTCPClient.hpp"
#include "IdTCPConnection.hpp"
#include "IdTCPServer.hpp"
#include "IdIPWatch.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TIdTCPClient *IdTCPClient1;
	TListBox *ListBox1;
	TLabel *Label1;
	TEdit *EChatServer;
	TLabel *Label2;
	TEdit *EMessage;
	TButton *Button1;
	TButton *BCon;
	TLabel *Nick;
	TEdit *ENick;
	TIdTCPServer *IdTCPServer1;
	void __fastcall BConClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall IdTCPServer1Execute(TIdContext *AContext);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
