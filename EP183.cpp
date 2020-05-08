/*************************************************************************
	> File Name: EP183.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 08 May 2020 02:34:40 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int f(int x){
    if(x <= 0) return 0;
    if(x == 1) return 1;
    if(x > 1 && (x & 1) == 0) return 3 * f(x / 2) - 1;
    if(x > 1 && (x & 1) == 1) return 3 * f((x + 1) / 2) - 1;
}
int main () {
    int x;
    cin >> x;
    cout << f(x) << endl;
    return 0;
}
