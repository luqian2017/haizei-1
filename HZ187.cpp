/*************************************************************************
	> File Name: HZ187.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 08 May 2020 04:36:01 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
long long f1(long long n){
    return (n == 1) ? 1 : 2 * f1(n - 1) + 1;
}
long long f2(long long n){
    return (n == 1) ? 1 : 2 * f2(n - 1) + n;
}
int main () {
    long long n;
    cin >> n;
    cout << f1(n) << " " << f2(n) << endl;
    return 0;
}
