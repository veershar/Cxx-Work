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
	bool owner;
	std::istream* ptrIStream;
	Token type {Type::end, "Default", -1};
};

namespace funcs
{
double expr(bool get);
double term(bool get);
double prime(bool get);
}
#endif // TOKEN_STREAM_H
