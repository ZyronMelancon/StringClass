#include "string.h"

string::string(char in[])
{
	int length = 0;

	for (int i = 0; i < 255; i++) //Loop
	{
		if (in[i] == 0) //Until end
			break;
		else
		{
			m_str[i] = in[i]; //Copy all input characters into m_str
			length++;
		}
	}

	m_str[length] = '\0'; //Add terminating character at end

}




int string::strcnt()
{
	int length = 0;

	for (int i = 0; i < 256; i++) //check through every character
	{
		if (m_str[i] == '\0')	//break loop at terminating character
			break;
		else					//But add one to length if not the end
			length++;
	}

	return length;	//return the length
}




char string::strret(int index)
{
	return m_str[index-1];
}




void string::strapp(string app)
{
	int length = strcnt();

	for (int i = 0; i < app.strcnt(); i++) 
	{
		m_str[app.strcnt() + i - 1] = app.m_str[i]; //At the end of the string, add the appending characters
		length++; 
	}

	m_str[length] = '\0'; //At the new ending, add terminating character
}




void string::strpre(string pre)
{
	int length = strcnt();

	/* Move the existing string forward by the 
	amount of characters in the prepending string */
	for (int i = 0; i < length; i++) 
	{
		m_str[length + i] = m_str[i];
	}

	/* Add the prepending string in the leftover slots */
	for (int i = 0; i < pre.strcnt(); i++)
	{
		m_str[i] = pre.m_str[i];
		length++;
	}

	m_str[length] = '\0'; //Add terminating character
}




void string::strlow()
{

	for (int i = 0; i < strcnt(); i++) //for every letter
	{
		if (m_str[i] >= 65 && m_str[i] <= 90) //if it's capital
			m_str[i] = m_str[i] + 32; //bump the ASCII value to its lowercase counterpart
		else if (m_str[i] == '\0') //but if it's the end, break the loop
			break;
		else //if it's any other character, continue loop
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
	int sublength = 0;
	int match = 0;

	for (int i = 0; i < 255; i++)
	{
		if (sub[i] == '\0')
			break;
		else
			sublength++;
	}

	/* This loop goes through every character
	in the string, and finds matches */

	for (int i = 0; i < strcnt(); i++)
	{
		if (m_str[i] == sub[0])	//If the first letter matches
		{
			for (int o = 0; o < sublength; o++) //Start a loop to match the rest of the substring
			{
				if (m_str[i + o] == sub[o]) //If letter in string = letter of substring
					match++;	//Add 1 to matching letters
			}

			if (match != sublength) //If the entire string did not match, reset
				match = 0;
		}

		if (match == sublength) //If the substring is found, break the loop
			break;
	}

	if (match == sublength) //If matching charas equals charas in string, return true, if not, false
	{
		return true;
	}
	else
		return false;

}




bool string::strsub(char sub[], int ind)
{
	int sublength = 0;
	int match = 0;

	for (int i = 0; i < 255; i++)
	{
		if (sub[i] == '\0')
			break;
		else
			sublength++;
	}

	/* This loop goes through every character
	in the string, and finds matches */

	for (int i = ind-1; i < sublength; i++) //Start at index, end at substring length
	{
		if (m_str[i] == sub[0])	//If the first letter matches
		{
			for (int o = 0; o < sublength; o++) //Start a loop to match the rest of the substring
			{
				if (m_str[i + o] == sub[o]) //If letter in string = letter of substring
					match++;	//Add 1 to matching letters
			}

			if (match != sublength) //If the entire string did not match, reset
				match = 0;
		}

		if (match == sublength) //If the substring is found, break the loop
			break;
	}

	if (match == sublength) //If matching charas equals charas in string, return true, if not, false
	{
		return true;
	}
	else
		return false;

}




bool string::strcomp(string comp)
{
	int match = 0;

	for (int i = 0; i < strcnt(); i++) //For every character
	{
		if (m_str[i] == comp.m_str[i]) //Does it match?
			match++;
		else
			continue;
	}

	if (match == comp.strcnt() && match == strcnt()) //If all characters match
		return true;
	else
		return false;

}




const char * string::cstyle()
{
	return m_str;
}
