// Counting Sheep.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;
const string nums[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
void main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i) {
		long n;
		cin >> n;
		if (n == 0)
		{
			cout << "Case #" << i << ": " << "INSOMNIA"<< endl;
			continue;
		}
		bool digits[10] = { };
		long result = 0;
		while (true)
		{
			result += n;
			for (int i = 0; i < 10; i++)
			{
				if (to_string(result).find(nums[i])!=string::npos)
				{
					digits[i] = true;
				}
			}
			bool done = true;
			for (int i = 0; i < 10; i++)
			{
				if (!digits[i])
				{
					done = false;
					break;
				}
			}
			if (done)
			{
				break;
			}
		}
		cout << "Case #" << i << ": " << result << endl;
	}
}