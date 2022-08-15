#include <iostream>
#include <string>
//#include <conio.h>
#include <algorithm>
//#include <cassert>
//#include<stack>
#include <cmath>
#include<vector>
#define ll long long
using namespace std;

void fast()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
}


bool isPrime(ll n)
{
    if(n <= 1){
        return false;
    }

    for(int i=2 ; i<= sqrt(n) ;++i){
        if(n % i == 0){
            return false;
        }
    }
    return true;

}


int main()
{
    fast();

    int s , power;
    cin >> s >> power;

    int *arr = new int[s];
    int *arrOP = new int[s];

    for(int i = 0 ; i < s ; ++i) cin >> arr[i];
    for(int i = 0 ; i < s ; ++i) cin >> arrOP[i];

    for(int i = 0 ; i < s ; i++){
        if(arrOP[i] == 1){
            if(isPrime(arr[i])){
                if(arr[i] % 2 == 0){
                    cout << 0 << " ";
                }else{
                    cout << 5 << " ";
                }
            }else{
                cout << -1 << " ";
            }
        }else {
            cout << 0  << " " ;
        }
    }






}
