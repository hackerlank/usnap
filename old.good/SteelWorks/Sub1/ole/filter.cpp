// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "filter.h"

// Dispatch interfaces referenced by this interface
#include "Criteria.h"


/////////////////////////////////////////////////////////////////////////////
// CFilter properties

/////////////////////////////////////////////////////////////////////////////
// CFilter operations

CCriteria CFilter::GetCriteria()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x60020000, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCriteria(pDispatch);
}
