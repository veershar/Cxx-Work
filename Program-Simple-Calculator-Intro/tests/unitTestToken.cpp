#include <iostream>
#include "TokenStream.h"



int main(int args, char** argv)
{
	std::cout << "Test Driven Development of a simple calculator" << std::endl;
	
	if(funcs::expr(true) == 0.0f)
	{
		std::cout << "Ok" << std::endl;
	}
	
	if(funcs::term(true) == 0.0f)
	{
		std::cout << "Ok" << std::endl;
	}
	
	if(funcs::prime(true) == 0.0f)
	{
		std::cout << "Ok" << std::endl;
	}
	
	TokenStream stream(std::cin);
	
	//std::cout << stream.get().strValue << std::endl;
	return 0;
}
