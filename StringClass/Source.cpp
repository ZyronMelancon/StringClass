#include<iostream>
#include "string.h"

void main()
{
	string s = "ONE";
	string sd = "blah";
	string sdf = "Lol";
	string sdfg = "LOLBLAHONE";

	char *input = new char[256];
	char *input2 = new char[256];
	int input3;

	std::cout << "String 's': " << s.cstyle() << std::endl;
	std::cout << "String 'sd': " << sd.cstyle() << std::endl;
	std::cout << "String 'sdf': " << sdf.cstyle() << std::endl;
	std::cout << "String 'sdfg': " << sdfg.cstyle() << std::endl;
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

	std::cout << "Enter another string: " << std::endl;
	std::cin >> input2;
	std::cout << "Now enter an index number: " << std::endl;
	std::cin >> input3;
	if (s.strsub(input2, input3))
		std::cout << input2 << " is a substring inside of 's' at index " << input3 << "." << std::endl;
	else
		std::cout << input2 << " is not a substring inside of 's' at index " << input3 << "." << std::endl;

	printf("\n");

	if (s.strcomp(sdfg))
		std::cout << "String 's' matches with string 'sdfg'!" << std::endl;
	else
		std::cout << "String 's' does not match with string 'sdfg'!" << std::endl;

	system("pause");
}