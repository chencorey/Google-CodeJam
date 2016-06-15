// Revenge of the Pancakes.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i) {
		string pancake;
		cin >> pancake;
		char p = '+';
		int flips = 0;
		for (int i = pancake.length()-1; i >=0; i--)
		{
			if (pancake[i] != p)
			{
				flips++;
				p = pancake[i];
			}
		}
		cout << "Case #" << i << ": " << flips << endl;
	}
}

