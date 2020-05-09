/*************************************************************************
	> File Name: HZ465.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 May 2020 04:52:42 PM CST
 ************************************************************************/

#include<iostream>
int digit(long long n,int k){
    int ans;
    while(k--){
        ans = n % 10;
        n /= 10;
    }
    return ans;
}
using namespace std;
int main () {
    long long n;
    int k;
    cin >> n >> k;
    cout << digit(n,k) << endl;
    return 0;
}
