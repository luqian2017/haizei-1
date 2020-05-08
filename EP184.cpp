/*************************************************************************
	> File Name: EP184.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 08 May 2020 02:52:10 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int f(int x ,int n){
  return (n == 1) ? x : f((x + 1) * 2, n - 1);
}
int main () {
    int n ;
    cin >> n;
    cout << f(1,n) << endl;
    return 0;
}
