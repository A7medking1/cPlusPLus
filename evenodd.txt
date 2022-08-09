#include <iostream>
#include <string>
//#include <conio.h>
#include <algorithm>
//#include <cassert>
//#include<stack>
#include <cmath>
#include<vector>

using namespace std;

long long sumOdd(long long number) 
{
	long long res = (number + 1) / 2;
	return res * res; 
}

long long sumEven(long long number)
{
	return (number * (number + 1));
}


int main()
{
	int n1, n2;
	cin >> n1 >> n2; 

	int start = min(n1,n2);
	int end = max(n1,n2);


	long long evenRes = sumEven(end / 2) - sumEven((start - 1) / 2);
	long long oddRes = sumOdd(end) - sumOdd(start - 1); 


	cout <<  evenRes + oddRes  << endl;
	cout << evenRes << endl;
	cout << oddRes<< endl;
	

}
