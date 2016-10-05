#include<iostream>
#include "string.h"

void main()
{
	string s = "ONE";
	string sd = "blah";
	string sdf = "Lol";

	char *input = new char[256];

	std::cout << "String 's': " << s.cstyle() << std::endl;
	std::cout << "String 'sd': " << sd.cstyle() << std::endl;
	std::cout << "String 'sdf': " << sdf.cstyle() << std::endl;
	printf("\n");
	std::cout << "String 's' length: " << s.strcnt() << std::endl;
	s.strapp(sd);
	std::cout << "String 's' appended: " << s.cstyle() << std::endl;
	s.strpre(sdf);
	std::cout << "String 's' prepended: " << s.cstyle() << std::endl;
	s.strlow();
	std::cout << "String 's' lowercase: " << s.cstyle() << std::endl;
	s.strcap();
	std::cout << "String 's' capital: " << s.cstyle() << std::endl;
	printf("\n");
	std::cout << "Enter a string: " << std::endl;
	std::cin >> input;
	
	if (s.strsub(input))
		std::cout << input << " is a substring inside of 's'." << std::endl;
	else
		std::cout << input << " is not a substring inside of 's'." << std::endl;

	system("pause");
}