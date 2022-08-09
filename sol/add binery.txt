#include <iostream>
#include <string>
//#include <conio.h>
#include <algorithm>
//#include <cassert>
//#include<stack>
#include<vector>

using namespace std;
string addBinary(string a, string b) {
	
	int size1 = a.size() - 1;
	int size2 = b.size() - 1;

	int carry = 0;
	string sum = "";


	while (size1 >= 0 || size2 >= 0 || carry)
	{
		if (size1 >= 0)
		{
			carry += a[size1--] - '0';
		}
		if (size2 >= 0)
		{
			carry += b[size2--] - '0';
		}

		sum += (carry % 2) + '0';
		carry /= 2;
	}

	reverse(sum.begin(), sum.end());

	return sum; 

}
int main()
{
	string s1, s2;
	cin >> s1 >> s2;

	cout << addBinary(s1, s2);
}




