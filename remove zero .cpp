#include <iostream>
#include <string>
//#include <conio.h>
#include <algorithm>
//#include <cassert>
//#include<stack>
#include <cmath>
#include<vector>

using namespace std;

int removeZero(int number) {

	int ans = 0 , ten = 1; 

	while (number > 0 )
	{
		int res = number % 10; 
		number /= 10;

		if (res != 0) 
		{
			ans += res * ten; 
			ten *= 10; 
		}
	}

	return ans; 

}


int main()
{
	string value;
	int flag = 0;
	while (cin >> value) { // I love you
		reverse(value.begin(), value.end()); // I  evol uoy
		if (flag) { // 1
			cout << " ";
		}
		flag = 1;
		cout << value;  // I
	}

}
