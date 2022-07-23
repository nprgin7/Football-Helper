// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : C:\Users\Filip\Documents\GitHub\ntp\IRating.xml
// Version  : 1.0
// (23.8.2021. 20:00:35 - - $Rev: 96726 $)
// ************************************************************************ //

#ifndef   IRatingH
#define   IRatingH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <Soap.SOAPHTTPClient.hpp>

#if !defined(SOAP_REMOTABLE_CLASS)
#define SOAP_REMOTABLE_CLASS __declspec(delphiclass)
#endif

namespace NS_IRating {

// ************************************************************************ //
// The following types, referred to in the WSDL document are not being represented
// in this file. They are either aliases[@] of other types represented or were referred
// to but never[!] declared in the document. The types from the latter category
// typically map to predefined/known XML or Embarcadero types; however, they could also
// indicate incorrect WSDL documents that failed to declare or import a schema type.
// ************************************************************************ //
// !:int             - "http://www.w3.org/2001/XMLSchema"[]
// !:double          - "http://www.w3.org/2001/XMLSchema"[]


// ************************************************************************ //
// Namespace : urn:Rating-IRating
// soapAction: urn:Rating-IRating#rate
// transport : http://schemas.xmlsoap.org/soap/http
// style     : rpc
// use       : encoded
// binding   : IRatingbinding
// service   : IRatingservice
// port      : IRatingPort
// URL       : http://localhost:8080/soap/IRating
// ************************************************************************ //
__interface INTERFACE_UUID("{080860D9-1904-E870-CD76-6E57981FD41C}") IRating : public IInvokable
{
public:
  virtual double          rate(const int pace, const int shot, const int pass, const int drib, const int def, const int phy) = 0;
};
typedef DelphiInterface<IRating> _di_IRating;

_di_IRating GetIRating(bool useWSDL=false, System::String addr= System::String(), Soaphttpclient::THTTPRIO* HTTPRIO=0);


};     // NS_IRating

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace NS_IRating;
#endif



#endif // IRatingH

