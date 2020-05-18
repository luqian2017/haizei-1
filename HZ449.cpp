/*************************************************************************
	> File Name: HZ449.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 14 May 2020 01:14:14 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int n;
    int num[21][21] = {0};
    cin >> n;
    for(int i = 0; i < n; i++) {
        num[i][0] = 1;
        for(int j = 1; j < i + 1; j++) {
            num[i][j] = num[i - 1][j] + num[i -1][j - 1];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(j) cout << ' ';
            cout << num[i][j];
        }
        cout << endl;
    }
    return 0;
}
