#include <iostream>
#include <string>
//#include <conio.h>
#include <algorithm>
//#include <cassert>
//#include<stack>
#include<vector>

using namespace std;


int main()
{

	int size;
	cin >> size;

	int** arr = new int* [size];
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> arr[i][j];
		}
	}

	int count = 0, res = 0;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				if (arr[i][k] == arr[k][j]) {
					count++;
				}
			}
			if (count == size)
			{
				res++;
			}
			count = 0;
		}
	}

	cout << res << endl;

}