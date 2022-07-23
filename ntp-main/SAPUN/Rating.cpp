// ************************************************************************ //
// Implementation class for interface IRating
// ************************************************************************ //
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

#if !defined(__Rating_h__)
#include "Rating.h"
#endif

// ************************************************************************ //
//  TRatingImpl implements interface IRating
// ************************************************************************ //
class TRatingImpl : public TInvokableClass, public IRating
{
public:
    /* Sample methods of IRating */
  double         rate(int pace, int shot, int pass, int drib, int def, int phy);

  /* IUnknown */
  HRESULT STDMETHODCALLTYPE QueryInterface(const GUID& IID, void **Obj)
                        { return GetInterface(IID, Obj) ? S_OK : E_NOINTERFACE; }
  ULONG STDMETHODCALLTYPE AddRef() { return TInvokableClass::_AddRef();  }
  ULONG STDMETHODCALLTYPE Release() { return TInvokableClass::_Release();  }
};

double TRatingImpl::rate(const int pace, const int shot, const int pass, const int drib, const int def, const int phy)
{
	return((pace + shot + pass + drib + def + phy)/6);
}

static void __fastcall RatingFactory(System::TObject* &obj)
{
  static _di_IRating iInstance;
  static TRatingImpl *instance = 0;
  if (!instance)
  {
	instance = new TRatingImpl();
	instance->GetInterface(iInstance);
  }
  obj = instance;
}

// ************************************************************************ //
//  The following routine registers the interface and implementation class
//  as well as the type used by the methods of the interface
// ************************************************************************ //
static void RegTypes()
{
  InvRegistry()->RegisterInterface(__delphirtti(IRating));
  InvRegistry()->RegisterInvokableClass(__classid(TRatingImpl), RatingFactory);
}
#pragma startup RegTypes 32

