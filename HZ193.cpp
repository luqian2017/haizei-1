/*************************************************************************
	> File Name: HZ193.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 14 May 2020 02:42:12 PM CST
 ************************************************************************/

#include<iostream>
#define max_n 100000
using namespace std;
long long a[max_n + 5] = {0};
int main () {
    long long n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long k,s;
    cin >> k >> s;
    long long l = 0,r = n - 1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(a[mid] == s - k) {
        cout << "Yes" << endl;
            return 0;
    }
        if(a[mid] < s - k) l = mid + 1;
        else r = mid - 1;
    }
    cout << "No" << endl;
    return 0;
}
