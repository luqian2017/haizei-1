/*************************************************************************
	> File Name: HZ448.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 May 2020 07:49:45 PM CST
 ************************************************************************/

#include<stdio.h>
int main () {
    int num[105] = {0};
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    int m;
    int flag = 0;
    scanf("%d", &m);
    for(int i = 0; i < n; i++){
        if(m == num[i]) {
            printf("%d\n", i + 1);
            flag = 1;
        }   
    }
    if(!flag) printf("%d\n", 0);
    return 0;
}
