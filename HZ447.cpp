/*************************************************************************
	> File Name: HZ447.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 14 May 2020 01:05:38 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int luck[14] = {4,7,44,77,47,74,447,474,444,477,744,747,774,777};
    int flag = 0;
    for(int i = 0; i < 14; i++) {
        if(!(n % luck[i])) flag = 1;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
