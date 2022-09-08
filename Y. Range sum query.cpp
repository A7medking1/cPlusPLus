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

    int s, testCase; 
    cin >> s >> testCase;


    vector<ll> pre(s);

    for (size_t i = 0; i < s; i++)
    {
        cin >> pre[i];
        if (i) {
            pre[i] += pre[i - 1];
        }
    }

 /*   for (size_t i = 0; i < s; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
*/
    while (testCase--)    
    {   
          
        int start, end;
        cin >> start >> end; 
       

        if (start ==  1) {
            cout << pre[end - 1] << "\n";
        }
        else
        {
            start--; end--;
            cout << pre[end] - pre[start - 1] << "\n";
        }   
    }
}
