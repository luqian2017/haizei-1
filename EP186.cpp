/*************************************************************************
	> File Name: EP186.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 08 May 2020 04:12:30 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int a[1000005]; 
int f(int n,int x, int p){
    return (p >= n) ? x : f(n,x + 1,p + a[p]);
}
int main (){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << f(n,0,0) << endl;
    return 0;
}
