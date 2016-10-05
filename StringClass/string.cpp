#include "string.h"

string::string(char in[])
{
	int length = 0;

	for (int i = 0; i < 255; i++)
	{
		if (in[i] == 0)
			break;
		else
		{
			m_str[i] = in[i];
			length++;
		}
	}

	m_str[length] = '\0';

}

int string::strcnt()
{
	int length = 0;

	for (int i = 0; i < 255; i++)
	{
		if (m_str[i] == '\0')
			break;
		else
			length++;
	}

	return length;
}

char string::strret(string string, int index)
{
	return string.m_str[index-1];
}

void string::strapp(string app)
{
	int length = strcnt();

	for (int i = 0; i < app.strcnt(); i++)
	{
		m_str[app.strcnt() + i - 1] = app.m_str[i];
		length++;
	}

	m_str[length] = '\0';
}

void string::strpre(string pre)
{
	int length = strcnt();

	for (int i = 0; i < length; i++)
	{
		m_str[length + i] = m_str[i];
	}

	for (int i = 0; i < pre.strcnt(); i++)
	{
		m_str[i] = pre.m_str[i];
		length++;
	}

	m_str[length] = '\0';
}

void string::strlow()
{

	for (int i = 0; i < strcnt(); i++)
	{
		if (m_str[i] >= 65 && m_str[i] <= 90)
			m_str[i] = m_str[i] + 32;
		else if (m_str[i] == '\0')
			break;
		else
			continue;
	}

}

void string::strcap()
{
	for (int i = 0; i < strcnt(); i++)
	{
		if (m_str[i] >= 97 && m_str[i] <= 122)
			m_str[i] = m_str[i] - 32;
		else if (m_str[i] == '\0')
			break;
		else
			continue;
	}
}

bool string::strsub(char sub[])
{
	int length = 0;
	int match = 0;

	for (int i = 0; i < 255; i++)
	{
		if (sub[i] == '\0')
			break;
		else
			length++;
	}

	for (int i = 0; i < strcnt(); i++)
	{
		if (m_str[i] == sub[0])
		{
			for (int o = 0; o < strcnt(); o++)
			{
				if (m_str[i + o] == sub[o])
					match++;
			}
		}
		if (match == length)
		{
			return true;
			break;
		}
		else
			return false;
	}


}

const char * string::cstyle()
{
	return m_str;
}
