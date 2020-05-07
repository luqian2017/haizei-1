/*************************************************************************
	> File Name: EP174.c
	> Author: 
	> Mail: 
	> Created Time: Thu 07 May 2020 12:01:08 PM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    char str[1000000] = {0},ans[3000000] = {0};
    gets(str);
    gets(ans);
    for(int i = 0,j = 0; str[i]; i++){
        if(str[i] != ' '){
            ans[j] = str[i];
            j++;
        } else {
            ans[j] = '%';
            ans[j + 1] = '2';
            ans[j + 2] = '0';
            j += 3;
        }
    }
    for(int i = 0;i < strlen(ans); i++){
        printf("%c",ans[i]);
    }
    return 0;
}
