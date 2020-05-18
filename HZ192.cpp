/*************************************************************************
	> File Name: HZ192.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 14 May 2020 02:29:06 PM CST
 ************************************************************************/

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
double f(double x) {
    return x * exp(x);
}
int main () {
    long long n;
    cin >> n;
    double l = 0,r = 30;
    while(r - l > 0.000001) {
        double mid = (r + l) / 2;
        if(f(mid) > n) {
            r = mid;
        } else l = mid;
    }
    printf("%.4f\n", l);
    return 0;
}
