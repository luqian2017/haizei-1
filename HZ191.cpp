/*************************************************************************
	> File Name: HZ191.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 14 May 2020 01:56:22 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 8000000
int prime[max_n + 5] = {0};
void init_prime () {
    for(int i = 2; i * i <= max_n; i++) {
        if(prime[i]) continue;
        for(int j = i * i; j <= max_n; j += i){
            prime[j] = 1;
        }
}
int main () {
    
    return 0;
}
