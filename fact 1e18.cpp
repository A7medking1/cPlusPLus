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

ll fact(ll n){

    if(n > 1){
         return n * fact(n - 1) ;
    }

    return 1;

}

 //  112   100     12 = 0
//   110   101     9


int main()
{
    fast();

    ll a,b ;

    cin >> a >> b ;

    if(b-a>= 10){
        cout << 0 ;
        return 0;
    }

    ll d;
    ll ans = 1 ;

    for(ll i = a + 1 ; i <= b ; i++){
         d = i % 10 ;

        ans *= d ;
        
        ans %= 10;
    }


   cout << ans;

}
