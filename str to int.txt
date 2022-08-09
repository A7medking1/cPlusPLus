#include <iostream>
#include <string>
//#include <conio.h>
#include <algorithm>
//#include <cassert>
//#include<stack>
#include <cmath>
#include<vector>

using namespace std;

void fast() 
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int myAtoi(string s) {
	int i = 0; 

	while (i < s.size() && s[i] == ' ')
	{
		i++;
	}

	s = s.substr(i);
	i = 0; 
	int sign = +1;

	if (s[0] == '-' || s[0] == '+') 
	{
		i = 1;
	}

	if (s[0] == '-') 
	{
		sign = -1;
	}


	long long n = 0; 

	while (i < s.size())
	{
		if (s[i] == ' ' || !isdigit(s[i]))
		{
			break;
		}

		

		n = n * 10 + s[i] - '0';

		if (sign == +1 && n > INT_MAX) return INT_MAX;
		if (sign == -1 && n * -1 < INT_MIN) return INT_MIN;

		i++;
	}


	return int(sign * n);

}



int main()
{

	fast();

	cout << myAtoi("    -42");
	






}
