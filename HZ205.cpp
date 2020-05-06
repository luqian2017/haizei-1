/*************************************************************************
	> File Name: HZ205.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 06 May 2020 08:35:55 PM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int n,m;
    double num[35][35],sum;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> num[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        sum = 0;
        for(int j = 1; j <= m; j++){
            sum += num[i][j];
        }
        printf("%.6lf\n", sum / m);
    }
    return 0;
}
