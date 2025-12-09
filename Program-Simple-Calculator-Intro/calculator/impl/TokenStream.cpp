#include "TokenStream.h"

TokenStream::TokenStream(std::istream& is)
{
	owner = false;
	ptrIStream = &is;
}

Token TokenStream::get()
{
	char ch{0};
	while(true)
	{
		*ptrIStream >> ch;
		getToken(ch);
	}
	return token;
}

void TokenStream::close()
{
	if(owner)
		delete ptrIStream;
}

void TokenStream::getToken(const char& ch)
{
	
	switch(ch)
	{
	case 0:
		token={Type::end}; break;	
	case ';': case '*': case '/': case '+': case '-': case '(': case ')': case '=':
		token={static_cast<Type>(ch)}; break;
	case '0': case '1': case '2': case '3': case '4': case '5':
	case '6': case '7': case '8': case '9': case '.':
		std::cout << "Case 2: " << ch << std::endl; break;
	default:
		std::cout << "Case Default: " << ch << std::endl; break;
	}
	std::cout << (char) token.type << std::endl;
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
