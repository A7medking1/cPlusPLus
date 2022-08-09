#include <iostream>
#include <string>
#include <conio.h>
#include <algorithm>

using namespace std;
int main()
{
	int size;
	cin >> size; 

	int* arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	/*4
		4 1 2 10  */
	int ser = 0 , dim = 0, first = 0,  last = size - 1; 

	for (size_t i = 0; i < size; i++)
	{
		if (i % 2 == 0) 
		{
			// 10
			if (arr[last] > arr[first]) 
			{
				ser += arr[last];
				--last;
			}
			else if (arr[last] <= arr[first])
			{
				ser += arr[first];
				++first;
			}
		}
		else
		{
			// 4
			if (arr[last] > arr[first])
			{
				dim += arr[last];
				--last;
			}
			else if (arr[last] <= arr[first])
			{
				dim += arr[first];
				++first;
			}
		}
	}

	cout << ser << " " << dim << endl;




}