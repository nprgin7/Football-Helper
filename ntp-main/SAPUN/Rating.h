// ************************************************************************ //
// Invokable interface declaration header for Rating
// ************************************************************************ //
#ifndef   RatingH
#define   RatingH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <System.Types.hpp>

// ************************************************************************ //
//  Enums exposed via SOAP must be byte-aligned
// ************************************************************************ //
#pragma option -b-
enum SampleEnum
{
  etNone,
  etAFew,
  etSome,
  etALot
};
#pragma option -b.

// ************************************************************************ //
//  To expose complex types via SOAP, the type must derive from TRemotable
//  All published members of the type will be exposed.
// ************************************************************************ //
class TSampleStruct : public TRemotable {
private:
  AnsiString         FLastName;
  AnsiString         FFirstName;
  double             FSalary;
__published:
  __property AnsiString    LastName = { read=FLastName, write=FLastName };
  __property AnsiString    FirstName = { read=FFirstName, write=FFirstName };
  __property double        Salary = { read=FSalary, write=FSalary };
};

// ************************************************************************ //
//  Remotable arrays must be Dynamic arrays since they must be discoverable
//  at runtime.
// ************************************************************************ //
typedef DynamicArray<double>  TDoubleArray;


// ************************************************************************ //
//  Invokable interfaces must derive from IInvokable
//  The methods of the interface will be exposed via SOAP
// ************************************************************************ //
__interface INTERFACE_UUID("{6DF45F45-2D5B-433D-820C-80FA8B2202B9}") IRating : public IInvokable
{
public:
	virtual double            rate(int pace, int shot, int pass, int drib, int def, int phy) = 0;
};
typedef DelphiInterface<IRating> _di_IRating;


#endif // RatingH
//---------------------------------------------------------------------------

