/*************************************************************************
	> File Name: HZ445.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 14 May 2020 12:22:40 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int num[10005] = {0};
    int n;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }
    for(int i = 0; i < n; i++) {
        int f = 0,l = 0;
        for(int j = i; j >= 0; j--) {
            if(num[i] < num[j]) f++;
        }
        for(int k = n; k > i; k--) {
            if(num[k] > num[i]) l++;
        }
        if(f == l) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
