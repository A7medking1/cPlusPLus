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
#define line "\n"



using namespace std;

void fast()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
}



int main()
{

    fast();

    int r, c, q;
    cin >> r >> c >> q;

    vector<vector<ll>> pre(r + 1, vector<ll>(c + 1, 0));

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> pre[i][j];
        }
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            pre[i][j] += pre[i - 1][j];

        }
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            pre[i][j] += pre[i][j - 1];
        }
    }

    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >>  x2 >> y2;

        ll sum = pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1];

        cout << sum << line;
    }

  /*  for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cout << pre[i][j] << " ";
        }
        cout << line;
    }*/




}
