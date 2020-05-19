/*************************************************************************
	> File Name: HZ216.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 May 2020 09:33:50 PM CST
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main () {
    string name[105];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> name[i];
        name[i] = name[i].substr(3);
    }
    sort(name,name + n);
    for(int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }
    return 0;
}
