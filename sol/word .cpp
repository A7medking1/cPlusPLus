#include <iostream>
#include <string>
#include <conio.h>
#include <algorithm>

using namespace std;
int main()
{
	string value;
	cin >> value; 


	int cap = 0;
	int small = 0;
	for (size_t i = 0; i < value.size(); i++)
	{
		if (value[i] >= 'a' && value[i] <= 'z') 
		{
			small++;
		}
		else
		{
			cap++;
		}
	}

	//cout << "cap => " << cap << endl;
	//cout << "small => " << small << endl;

	for (size_t i = 0; i < value.size(); i++)
	{
		if(small >= cap && (value[i] >= 'A' && value[i] <= 'Z'))
		{
			int res = value[i] + 32;
			value[i] = (char)res;
		}
		else if (small < cap && (value[i] >= 'a' && value[i] <= 'z'))
		{
			int res = value[i] - 32;
			value[i] = (char)res;
		}
	}

	cout << value << endl;
}