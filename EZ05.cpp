/*************************************************************************
	> File Name: EZ05.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 10 May 2020 02:13:52 PM CST
 ************************************************************************/

#include<stdio.h>
int gcd(int a,int b){
    return b ? gcd(b, a %b) : a ;
}
int main () {
    int ans = 1;
    for(int i = 1; i <= 20; i++){
        ans = ans * (i / gcd(ans, i));
    }
    printf("%d\n",ans);
    return 0;
}
