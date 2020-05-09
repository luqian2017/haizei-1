/*************************************************************************
	> File Name: HZ464.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 May 2020 04:44:13 PM CST
 ************************************************************************/

#include<iostream>
int check_year(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
using namespace std;
int main () {
    int a,b,ans = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        ans += check_year(i);
    }
    cout << ans << endl;
    return 0;
}
