// QR1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
const string W [10] = { "ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE" };
//0z 8g 6x 3h 7s 5v 9i 4u 2w 1n
string word;
vector<int> result;
void zero() 
{
	string::size_type n = word.find("Z");
	if (n != string::npos)
	{
		string s = W[0];
		for (int i = 0; i < s.length(); i++)
		{
			word.erase(word.begin() + word.find(s[i]));
		}
		result.push_back(0);
		zero();
	}
}
void one()
{
	string::size_type n = word.find("N");
	if (n != string::npos)
	{
		string s = W[1];
		for (int i = 0; i < s.length(); i++)
		{
			word.erase(word.begin() + word.find(s[i]));
		}
		result.push_back(1);
		one();
	}
}
void two()
{
	string::size_type n = word.find("W");
	if (n != string::npos)
	{
		string s = W[2];
		for (int i = 0; i < s.length(); i++)
		{
			word.erase(word.begin() + word.find(s[i]));
		}
		result.push_back(2);
		two();
	}
}
void three()
{
	string::size_type n = word.find("H");
	if (n != string::npos)
	{
		string s = W[3];
		for (int i = 0; i < s.length(); i++)
		{
			word.erase(word.begin() + word.find(s[i]));
		}
		result.push_back(3);
		three();
	}
}
void four()
{
	string::size_type n = word.find("U");
	if (n != string::npos)
	{
		string s = W[4];
		for (int i = 0; i < s.length(); i++)
		{
			word.erase(word.begin() + word.find(s[i]));
		}
		result.push_back(4);
		four();
	}
}
void five()
{
	string::size_type n = word.find("V");
	if (n != string::npos)
	{
		string s = W[5];
		for (int i = 0; i < s.length(); i++)
		{
			word.erase(word.begin() + word.find(s[i]));
		}
		result.push_back(5);
		five();
	}
}
void six()
{
	string::size_type n = word.find("X");
	if (n != string::npos)
	{
		string s = W[6];
		for (int i = 0; i < s.length(); i++)
		{
			word.erase(word.begin() + word.find(s[i]));
		}
		result.push_back(6);
		six();
	}
}
void seven()
{
	string::size_type n = word.find("S");
	if (n != string::npos)
	{
		string s = W[7];
		for (int i = 0; i < s.length(); i++)
		{
			word.erase(word.begin() + word.find(s[i]));
		}
		result.push_back(7);
		seven();
	}
}
void eight()
{
	string::size_type n = word.find("G");
	if (n != string::npos)
	{
		string s = W[8];
		for (int i = 0; i < s.length(); i++)
		{
			word.erase(word.begin() + word.find(s[i]));
		}
		result.push_back(8);
		eight();
	}
}
void nine()
{
	string::size_type n = word.find("I");
	if (n != string::npos)
	{
		string s = W[9];
		for (int i = 0; i < s.length(); i++)
		{
			word.erase(word.begin() + word.find(s[i]));
		}
		result.push_back(9);
		nine();
	}
}
//0z 8g 6x 3h 7s 5v 9i 4u 2w 1n
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i) 
	{
		word.clear();
		result.clear();
		cin >> word;
		zero();
		eight();
		six();
		three();
		seven();
		five();
		nine();
		four();
		two();
		one();
		sort(result.begin(), result.end());
		cout << "Case #" << i << ": ";
		for (int i = 0; i < result.size(); i++)
		{
			cout << result[i];
		}
		cout << endl;
	}
	return 0;
}

