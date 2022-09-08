#include <iostream>
#include <string>
//#include <conio.h>
#include <algorithm>
//#include <cassert>
//#include<stack>
#include<queue>
#include<set>
#include<map>
#include <unordered_map>
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

    fast();

    string str; 
    cin >> str; 

    vector<ll> pre(str.size() +1);

    str = " " + str;

    //pre[0] = 0;

    for (size_t i = 1; i < str.size(); i++)
    {
        if (str[i] == 'a') pre[i] += pre[i - 1] + 1;
        else  pre[i] += pre[i - 1];
        
    }

    int testCase;
    cin >> testCase;

    while (testCase--)  
    {
        int l, r; 
        cin >> l >> r; 

        if (l == 1)  cout << pre[r] << "\n";
         else cout << pre[r] - pre[l - 1] << "\n";
        
    }
}
