/*************************************************************************
	> File Name: HZ467.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 May 2020 05:02:54 PM CST
 ************************************************************************/

#include<iostream>
long long f(int n){
    return n == 1 ? 1 : f(n - 1) * n;
}
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
