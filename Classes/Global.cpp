#include "Global.h"

std::string ItoS(int x)
{
	std::string temp, str;
	if (x < 0)
	{
		x = -x;
		str += '-';
	}
	int jiao = x % 10;
	x /= 10;
	if (!x)
	{
		temp += "0";
	}
	else
		while (x != 0)
		{
			temp += x % 10 + '0';
			x /= 10;
		}

	for (std::string::iterator i = temp.end() - 1; i >= temp.begin(); --i)
		str += *i;

	str += ".";
	str += jiao+'0';

	return str;
}

int pow10(int x)
{
	int t = 1;
	for (int i = 0; i < x; ++i)
		t *= 10;
	return t;
}

int StoI(std::string s)
{
	if (s.empty())
		return ERROR_STRING;

	int num = 0, temp = s.length(), c = 0;
	bool flag = true;

	for (std::string::iterator i = s.begin(); i < s.end(); ++i, ++c)
	{
		if (flag && *i == '.')
		{
			temp = c;
			flag = false;
		}
		else if (*i<'0' || *i>'9')
		{
			return ERROR_STRING;
		}
	}

	for (std::string::iterator i = s.begin(); i < s.end(); ++i,--temp)
	{
		if (!temp)
		{
			if (i + 1 == s.end())
			{
				return num;
			}
			else
			{
				num += *(i + 1) - '0';
				return num;
			}
		}
		int x = *i - '0';
		num += x * pow10(temp);
	}

	return num;
}

int stdStoI(std::string s)
{

	if (s.empty())
		return ERROR_STRING;

	int num = 0, temp = s.length()-1;

	for (std::string::iterator i = s.begin(); i < s.end(); ++i, --temp)
	{
		if (*i<'0' || *i>'9')
		{
			return ERROR_STRING;
		}
		else
		{
			int x = *i - '0';
			num += x * pow10(temp);
		}
	}

	return num;
}

std::string stdItoS(int x)
{
	std::string temp, str;
	while (x != 0)
	{
		temp += x % 10 + '0';
		x /= 10;
	}
	for (std::string::iterator i = temp.end() - 1; i >= temp.begin(); --i)
		str += *i;
	return str;
}