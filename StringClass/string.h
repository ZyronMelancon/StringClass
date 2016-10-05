#pragma once

class string
{
private: 
	char m_str[256];
public:
	string(char[]);
	int strcnt(); //Returns the length of the string
	char strret(string string, int index); //Returns character at index
	void strapp(string);
	void strpre(string);
	void strlow();
	void strcap();
	bool strsub(char[]);
	const char * cstyle();
};

