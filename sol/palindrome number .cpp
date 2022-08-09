#include <iostream>
#include <string>
//#include <conio.h>
#include <algorithm>
//#include <cassert>
//#include<stack>
#include<vector>

using namespace std;
bool isPalindrome(long long x) 
{
	long long num = x;

	// 121
	long long reverse = 0;

	while (x > 0)
	{

		reverse = reverse * 10 + x % 10;
		x /= 10;
	}


	if (reverse == num)
	{
		return true;
	}
	else
	{
		return false;
	}
}



int main()
{
	int number; 
	cin >> number; 
	
	cout << isPalindrome(number);
}