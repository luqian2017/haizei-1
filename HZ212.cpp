/*************************************************************************
	> File Name: HZ212.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 17 May 2020 07:58:49 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main () {
    string str[10];
    for(int i = 0;i < 10; i++) {
        cin >> str[i];
    }
    sort(str, str + 10);
    for(int i = 0; i < 10; i++) {
        cout << str[i] << endl;
    }
    return 0;
}
