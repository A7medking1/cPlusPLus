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
 int bin(vector<int>& nums, int k) {

     // 3 6 8 10 11
    int  upper = nums.size(), lower = 0;

	while(lower < upper){ // 3 <= 4

        int mid = (lower+upper) / 2 ; // 3

        if(nums[mid] <= k){
            lower = mid+1; //lower = 4
        }else{
            upper = mid ; //4
        }
	}

	return lower;
 }


int main()
{
   fast();


    int s , ss;
    cin >> s >> ss;

    vector<int> v ,vv;

    for(int i= 0 ; i < s ;++i){
        int num;
        cin >> num;
        v.push_back(num);
    }
    for(int i= 0 ; i < ss ;++i){
        int num;
        cin >> num;
        vv.push_back(num);
    }

    sort(v.begin(),v.end());


    for(int i = 0 ; i < ss ; ++i){
        cout << bin(v,vv[i]) << " " ;
    }





}
