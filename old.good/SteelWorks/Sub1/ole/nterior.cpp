// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "nterior.h"


/////////////////////////////////////////////////////////////////////////////
// Cnterior properties

/////////////////////////////////////////////////////////////////////////////
// Cnterior operations

VARIANT Cnterior::GetColor()
{
	VARIANT result;
	InvokeHelper(0x60020000, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void Cnterior::SetColor(VARIANT* newValue)
{
	static BYTE parms[] =
		VTS_PVARIANT;
	InvokeHelper(0x60020000, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

LPDISPATCH Cnterior::GetParent()
{
	LPDISPATCH result;
	InvokeHelper(0x60020002, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
	return result;
}
