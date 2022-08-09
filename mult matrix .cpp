#include <iostream>
#include <string>
//#include <conio.h>
#include <algorithm>
//#include <cassert>
//#include<stack>
#include <cmath>
#include<vector>

using namespace std;

void inputarray(int **arr , int row, int column)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }
}

int main()
{
    int row1, column1; 
    cin >> row1 >> column1; // r1 * c1

    int** arr1 = new int* [row1];

    for (int i = 0; i < row1; i++) {
        arr1[i] = new int[column1];
    }

    inputarray(arr1, row1, column1);
  

    int row2, column2;
    cin >> row2 >> column2;  // r2 * c2

    int** arr2 = new int* [row2];

    for (int i = 0; i < row2; i++) {
        arr2[i] = new int[column2];
    }

    inputarray(arr2, row2, column2);
    

     // 2 x 3 * 3 x 2 = 2 x 2     r1 * c2 


    int** result = new int* [row1];


  

    for (int i = 0; i < row1; i++) {
        result[i] = new int[column2];
    }


    for (int i = 0; i < row1; i++) { // i = 1 i<2
        for (int z = 0; z < column2; z++) { // z < 2 
            result[i][z] = 0;
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            for (int k = 0;  k < column1; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }



    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
   






}
