/*************************************************************************
	> File Name: EP185.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 08 May 2020 03:25:09 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int f(int n){
    return (n == 1 || n == 2) ? 1 : f(n - 1) + f(n - 2);
}
int main () {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
