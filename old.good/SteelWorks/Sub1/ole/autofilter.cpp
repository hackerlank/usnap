// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "autofilter.h"

// Dispatch interfaces referenced by this interface
#include "Filters.h"
#include "Range.h"


/////////////////////////////////////////////////////////////////////////////
// CAutoFilter properties

/////////////////////////////////////////////////////////////////////////////
// CAutoFilter operations

void CAutoFilter::Apply()
{
	InvokeHelper(0x60020000, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

CFilters CAutoFilter::GetFilters()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x60020001, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CFilters(pDispatch);
}

CRange CAutoFilter::GetRange()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x60020002, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CRange(pDispatch);
}
