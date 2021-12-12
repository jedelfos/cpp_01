#include <iostream>

int main()
{
	std::string str;
	
	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "adresse de ptr : " << stringPTR << "\n";
	std::cout << "adresse de ref : " << &stringREF << "\n";

	std::cout << "phrase de ptr : " << *stringPTR << "\n";
	std::cout << "phrase de ref : " << stringREF << "\n";
}