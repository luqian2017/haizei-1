/*************************************************************************
	> File Name: HZ182.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 May 2020 08:36:22 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    int ans = 0;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        if(ans <= a[i]) ans = a[i];
    }
    cout << ans << endl;
    return 0;
}
