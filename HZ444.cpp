/*************************************************************************
	> File Name: HZ444.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 14 May 2020 11:31:22 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int num[105] = {0};
    for(int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    int x;
    cin >> x;
    int temp = num[n];
    for(int i = n; i > x; i--) {
        num[i] = num[i - 1];
    }
    num[x] = temp;
    for(int i = 1;i <= n;i++) {
        if(i != 1) cout << ' ';
        cout << num[i] ;
    }
    cout << endl;
    return 0;
}
