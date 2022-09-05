#include <iostream>
#include <string>
//#include <conio.h>
#include <algorithm>
//#include <cassert>
//#include<stack>
#include<queue>
#include<map>
#include <cmath>
#include<vector>
#define ll long long
using namespace std;

void fast()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
}

int main()
{
    //fast();

    int testCase;
    cin >> testCase;


    while (testCase--)
    {
        int s;
        cin >> s;
        vector<int> arr;


        for (size_t i = 0; i < s; i++)
        {
            int num;
            cin >> num;
            arr.push_back(num);
        }
        for (size_t i = 0; i < s; i++)
        {
            int moveswheel;
            cin >> moveswheel;
            string str;
            cin >> str;

            for (size_t j = 0; j < moveswheel; j++)
            {
                if (str[j] == 'U')
                {
                    if (arr[i] == 0) {
                        arr[i] = 9;
                    }
                    else {
                        arr[i]--;
                    }
                }
                else
                {
                    if (arr[i] == 9) {
                        arr[i] = 0;
                    }
                    else {
                        arr[i]++;
                    }
                }
            }
        }

        for (size_t i = 0; i < s; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}
