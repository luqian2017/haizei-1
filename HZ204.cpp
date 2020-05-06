/*************************************************************************
	> File Name: HZ204.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 06 May 2020 08:10:35 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
    int n;
    int num[35][35] ;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> num[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i = j) cout << num[i][j] << endl;
        }
    }
    return 0;
}
