// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : C:\Users\Filip\Documents\GitHub\ntp\IRating.xml
// Version  : 1.0
// (23.8.2021. 20:00:35 - - $Rev: 96726 $)
// ************************************************************************ //

#include <System.hpp>
#pragma hdrstop

#include "IRating.h"



namespace NS_IRating {

_di_IRating GetIRating(bool useWSDL, System::String addr, Soaphttpclient::THTTPRIO* HTTPRIO)
{
  static const char* defWSDL= "C:\\Users\\Filip\\Documents\\GitHub\\ntp\\IRating.xml";
  static const char* defURL = "http://localhost:8080/soap/IRating";
  static const char* defSvc = "IRatingservice";
  static const char* defPrt = "IRatingPort";
  if (addr=="")
    addr = useWSDL ? defWSDL : defURL;
  Soaphttpclient::THTTPRIO* rio = HTTPRIO ? HTTPRIO : new Soaphttpclient::THTTPRIO(0);
  if (useWSDL) {
    rio->WSDLLocation = addr;
    rio->Service = defSvc;
    rio->Port = defPrt;
  } else {
    rio->URL = addr;
  }
  _di_IRating service;
  rio->QueryInterface(service);
  if (!service && !HTTPRIO)
    delete rio;
  return service;
}


// ************************************************************************ //
// This routine registers the interfaces and types exposed by the WebService.
// ************************************************************************ //
static void RegTypes()
{
  /* IRating */
  InvRegistry()->RegisterInterface(__delphirtti(IRating), L"urn:Rating-IRating", L"");
  InvRegistry()->RegisterDefaultSOAPAction(__delphirtti(IRating), L"urn:Rating-IRating#rate");
  /* IRating->rate */
  InvRegistry()->RegisterParamInfo(__delphirtti(IRating), "rate", "return_", L"return", L"");
}
#pragma startup RegTypes 32

};     // NS_IRating


