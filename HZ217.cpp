/*************************************************************************
	> File Name: HZ217.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 May 2020 09:44:27 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#define max_n 100000
int num[max_n + 5] = {0};
bool cmp(int a,int b) {
    return a > b;
}
using namespace std;
int main () {
    int n,cnt = 0; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n, cmp);
    int tmp = num[n / 2];
    for(int j = 0; j < n; j++) {
        if(num[j] >= tmp) cnt++;
    }
    cout << tmp << " " << cnt << endl;
    return 0;
}
