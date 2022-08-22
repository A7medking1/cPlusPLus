#include <iostream>
#include <string>
//#include <conio.h>
#include <algorithm>
//#include <cassert>
//#include<stack>
#include<queue>
#include <cmath>
#include<vector>
#define ll long long
using namespace std;

void fast()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
}

string longestPalindrome(string s) {

    string ans;
    int n = s.size();

    int maxLength = 0;

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int diff = 0; diff < n; diff++)
    {
        for (int i = 0, j = i + diff; j < n; i++, j++)
        {
            if (i == j)
            {
                dp[i][j] = 1;
            }
            else if (diff == 1)
            {
                dp[i][j] = (s[i] == s[j]) ? 2 : 0;
            }
            else
            {
                if (s[i] == s[j] && dp[i + 1][j - 1]) {
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                }
            }
            if (dp[i][j]) {
                if (j - i + 1 > maxLength) {
                    maxLength = j - i + 1;
                    ans = s.substr(i, maxLength);
                }
            }
        }
    }
    return ans;
}





int main()
{
    // fast();
    int n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;

        cout << longestPalindrome(str) << endl;
    }
}
