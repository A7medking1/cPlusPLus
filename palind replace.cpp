#include<bits/stdc++.h>

using namespace std;

bool check(string str){
    int s = str.size() / 2 ;

    bool isPalindrome = true ;

    /*
      a?z?
    */

    for(int i = 0 , j = str.size() - 1; i <= s ;i++ , j--)
        {
            if(str[i] == str[j] || str == "?" || (str[i] == '?' && str[j] != '?') || (str[i] != '?' && str[j] == '?'))
                {
                    isPalindrome = true;
                }else{
                    isPalindrome = false;
                    break;
                }
        }

        return isPalindrome;
}


int main()
{
    string str;
    cin >> str ;

    int s = str.size() / 2 ;

    if(str != "?"){
        if(check(str))
            {
            for(int i = 0 , j = str.size() - 1; i <= s ;i++ , j--)
                {
                   if(str[i] == '?' && str[j] != '?')
                    {
                        str[i] = str[j];
                    }else if (str[i] != '?' && str[j] == '?'){
                         str[j] = str[i];
                    }else if (str[i] == '?' && str[j] == '?')
                    {
                        str[i]= 'a';
                        str[j] = 'a';
                    }
                }
                cout << str << endl;
            }else{
                cout << -1 << endl;
            }

    }else{
        cout << 'a' << endl;
    }


}
