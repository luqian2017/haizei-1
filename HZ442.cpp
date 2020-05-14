/*************************************************************************
	> File Name: HZ442.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 14 May 2020 10:54:12 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int f[35];
int f1(int n) {
    f[1] = 1,f[2] = 2;
    for(int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[n] ;
}
int main () {
    int n;
    cin >> n;
    for(int i = 1;i <= n; i++){
        if(i != 1) cout << ' ' ;
        f1(i);
    }
    cout << endl;
    return 0;
}
