/**
 * @file TokenStream.h
 * @brief
 *
 */

#include "Token.h"
#include <istream>

#ifndef _TOKEN_STREAM_H
#define _TOKEN_STREAM_H

/**
 * @class TokenStream.h
 * @brief
 * 
 */
class TokenStream
{
public:
	TokenStream(std::istream& is);
	Token get();
	const Token& current();

private:
	void close();
	void getToken(const char& ch);
	bool owner;
	std::istream* ptrIStream;
	Token token;
};

namespace funcs
{
double expr(bool get);
double term(bool get);
double prime(bool get);
}
#endif // TOKEN_STREAM_H
