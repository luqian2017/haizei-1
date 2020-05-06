/*************************************************************************
	> File Name: EP206.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 06 May 2020 08:54:32 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n,m;
    double num[35][35];
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> num[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        double ans = 0;
        for(int j = 0; j < n; j++){
            ans += num[j][i];
        }
        cout << ans << endl;
    }
    return 0;
}
