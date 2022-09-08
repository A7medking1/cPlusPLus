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

bool isPowerOfTwo(int x)
{
    return (x && !(x & (x - 1)));
}

int main()
{

   // fast();

    int s, q;
    cin >> s >> q;

    vector<int> v(s);

    for (size_t i = 0; i < s; i++)
    {
        cin >> v[i];
    }

    while (q--)
    {
        string str;
        cin >> str;

        if (str == "sort") {
            int l, r;
            cin >> l >> r;
            sort(v.begin() + l - 1 , v.begin() + r);
        }else if (str == "front") {
            cout << v.front() << "\n";
        }else if (str == "push_back") {
            ll x;
            cin >> x;
            v.push_back(x);
        }else if (str == "back") {
            cout << v.back() <<"\n";
        }else if (str == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(v.begin() + l - 1, v.begin() + r);
        }
        else if (str == "print") {
            int pos;
            cin >> pos;
            cout << v[pos - 1] << "\n";
        }
        else if (str == "pop_back") {
            v.pop_back();
        }
    }

}
