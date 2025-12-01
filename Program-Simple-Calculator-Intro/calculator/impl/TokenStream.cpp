#include "TokenStream.h"

TokenStream::TokenStream(std::istream& is)
{
	owner = false;
	ptrIStream = &is;
}

Token TokenStream::get()
{
	return type;
}

void TokenStream::close()
{
	if(owner)
		delete ptrIStream;
}

double funcs::expr(bool get)
{
	return 0.0f;
}


double funcs::term(bool get)
{
	return 0.0f;
}

double funcs::prime(bool get)
{
	return 0.0f;
}
