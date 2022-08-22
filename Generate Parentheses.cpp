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
void fnc(vector<string> &ans,int n , int open,int close,string str){

    if(str.size() == n*2){
        ans.push_back(str);
        return;
    }
    if(open < n){
        fnc(ans,n,open+1,close,str+"(");
    }

    if(close < open){
        fnc(ans,n,open,close+1,str+")");
    }
}

vector<string> generateParenthesis(int n) {
        vector<string> ans;

        fnc(ans,n,0,0,"");
        return ans;
}

int main()
{
   fast();

   int n;
   cin >> n ;
   vector<string> ans = generateParenthesis(n);

    for(int i = 0 ; i < ans.size();i++){
        cout << ans[i] << " : " ;
    }

}
