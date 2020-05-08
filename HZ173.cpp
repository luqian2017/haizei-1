/*************************************************************************
	> File Name: HZ173.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 06 May 2020 10:52:15 PM CST
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main () {
    char str[10005] = {0};
    int chr = 0, num = 0, blk = 0, otr = 0;
    gets(str);
    for(int i = 0; str[i] != 0; i++){
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            chr++;
        } else if (str[i] >= '0' && str[i] <= '9'){
            num++;
        } else if(str[i] == ' '){
            blk++;
        } else otr++;
    }
    cout << chr << " " << num << " " <<  blk << " " << otr << endl;
    return 0;
}
