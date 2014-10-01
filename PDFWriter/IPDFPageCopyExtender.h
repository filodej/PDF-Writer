#pragma once

#include "EStatusCode.h"

class PageContentContext;
class PDFStreamInput;
class PDFParser;

class IPDFPageCopyExtender
{
public:

	virtual ~IPDFPageCopyExtender(){}

	// for extending filter support in stream read
	virtual EStatusCode CopyContent( PageContentContext* inContentContext, IByteReader* inStramReader ) = 0;
};
