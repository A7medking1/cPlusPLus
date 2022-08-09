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
	int n1, n2; 
	cin >> n1 >> n2; 

	int res = n1 + n2; 

	int rZero1 = removeZero(n1);
	int rZero2 = removeZero(n2);
	int rZerores = removeZero(res);

	int res2 = rZero1 + rZero2;

	if (rZerores == res2) 
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;

	}




}
