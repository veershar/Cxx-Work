/**
 * @file Token.h
 * @brief
 *
 */

#ifndef _TOKEN_H
#define _TOKEN_H

#include <string>
#include <iostream>
/**
 * @class 
 * @brief
 * 
 */
enum class Type:char
{
	name,
	number,
	end,
	plus='+',
	minus='-',
	mul='*',
	div='/',
	print=';',
	assign='=',
	lp='(',
	rp=')',
	MAX_TOKEN
};

/**
 * @struct 
 * @brief
 * 
 */
struct Token
{
	Type type;
	std::string strValue;
	double numValue;
};

#endif // TOKEN_H
