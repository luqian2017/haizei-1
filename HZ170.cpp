/*************************************************************************
	> File Name: HZ170.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 06 May 2020 11:35:02 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main () {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        while(str.find("Ban_smoking") != -1){
            int pos = str.find("Ban_smoking");
            str.replace(pos, 11, "No_smoking");
        }
        cout << str << endl;
    }
    return 0;
}
