/*************************************************************************
	> File Name: HZ167.c
	> Author: 
	> Mail: 
	> Created Time: Thu 07 May 2020 11:41:23 AM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main () {
    char str[1005], buffer[1005];
    gets(str);
    gets(buffer);
    int ans = 0;
    for(int i = 0; i <= strlen(str) - strlen(buffer); i++){
        if(strncmp(buffer,&str[i],strlen(buffer)) == 0) {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
