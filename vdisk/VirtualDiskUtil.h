//-----------------------------------------------------------------------------
// Copyright (c) 2014 Michael G. Brehm
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//-----------------------------------------------------------------------------

#ifndef __VIRTUALDISKUTIL_H_
#define __VIRTUALDISKUTIL_H_
#pragma once

#pragma warning(push, 4)				// Enable maximum compiler warnings

using namespace System;
using namespace System::Runtime::InteropServices;

BEGIN_NAMESPACE(zuki)
BEGIN_NAMESPACE(storage)
BEGIN_NAMESPACE(vdisk)

//---------------------------------------------------------------------------
// Class VirtualDiskUtil (internal)
//
// Collection of useful static functions
//---------------------------------------------------------------------------

ref class VirtualDiskUtil
{
public:

	//-----------------------------------------------------------------------
	// Member Functions

	static PWSTR	FreePWSTR(PWSTR pwstr);
	static PWSTR	FreePWSTR(PCWSTR pwstr) { return FreePWSTR(const_cast<PWSTR>(pwstr)); }
	static PWSTR	StringToPWSTR(String^ string);
	static UUID		SysGuidToUUID(Guid guid);
	static Guid		UUIDToSysGuid(const UUID& guid);
};

//---------------------------------------------------------------------------

END_NAMESPACE(vdisk)
END_NAMESPACE(storage)
END_NAMESPACE(zuki)

#pragma warning(pop)

#endif	// __VIRTUALDISKUTIL_H_
