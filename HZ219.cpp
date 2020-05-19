/*************************************************************************
	> File Name: HZ219.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 10:05:33 AM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#define max_n 10000
int a[max_n + 5] = {0};
using namespace std;
bool cmp (int a,int b) {
    return a > b;
}
int main () {
    int n,l1,r1,l2,r2;
    cin >> n >> l1 >> r1 >> l2 >> r2;
    for(int i  = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a + l1 - 1, a + r1);
    sort(a + l2 - 1, a + r2, cmp);
    for(int i = 0; i < n; i++) {
        if(i) cout << " " ;
        cout << a[i];
    }
    cout << endl;
    return 0;
}
