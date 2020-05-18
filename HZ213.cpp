/*************************************************************************
	> File Name: HZ213.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 May 2020 04:54:33 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#define max_n 30
int a[max_n + 5] = {0};
int b1[max_n + 5] = {0};
int b2[max_n + 5] = {0};
int b3[max_n + 5] = {0};
int b4[max_n + 5] = {0};
int b5[max_n + 5] = {0};
int b6[max_n + 5] = {0};
int cmp (int a,int b) {
    return a > b;
}
using namespace std;
int main () {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a,a + n,cmp);
    for(int i = 0; i < n; i++) {
        if(a[i] == 100) {
            b1[0] ++;
        }
        if(a[i] >= 90 && a[i] <= 99) {
            b2[0] ++ ;
        }
        if(a[i] >= 80 && a[i] <= 89) {
            b3[0] ++;
        }
        if(a[i] >= 70 && a[i] <= 79) {
            b4[0] ++;
        }
        if(a[i] >= 60 && a[i] <= 69) {
            b5[0] ++;
        }
        if(a[i] < 60) {
            b6[0] ++;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    cout << b1[0] << " "<< b2[0] << " "<< b3[0] << " " << b4[0] << " " << b5[0] << " " << b6[0] << endl;
    return 0;
}

