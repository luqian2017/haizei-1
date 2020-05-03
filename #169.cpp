/*************************************************************************
	> File Name: #169.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 03 May 2020 12:52:35 PM CST
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int num[128] = {0};
    for(int i = 0; i < n; i++)
    {
        char a;
        int b;
        cin >> a >> b;
        num[(int)a] = b;
    }
    string str;
    cin >> str;
    int ans = 0;
    for(int i = 0; i < str.size(); i++){
     ans += num[(int)str[i]];   
    }
    cout << ans << endl;
    return 0;
}
