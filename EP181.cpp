/*************************************************************************
	> File Name: EP181.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 06 May 2020 10:33:19 PM CST
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main () {
    char str[50];
    cin >> str ;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 'a' - 'A';
        } else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 'a' - 'A';
        }
    }
    cout << str << endl;
    return 0;
}
