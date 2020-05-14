/*************************************************************************
	> File Name: HZ180.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 May 2020 08:26:38 PM CST
 ************************************************************************/

#include<iostream>
long long pow(int n){
    long long ans = 2;
    for(int i = 1;i < n;i++){
        ans *= 2;
    }
    return ans;
}
using namespace std;
int main () {
    int n;
    cin >> n;
    cout << pow(n) << endl;
    return 0;
}
