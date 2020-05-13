/*************************************************************************
	> File Name: HZ188.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 13 May 2020 07:34:27 PM CST
 ************************************************************************/

#include<iostream>
#define max_n 8000000
using namespace std;
int prime[max_n + 5] = {0};
void init_prime() {
    for(int i = 2; i * i <= max_n; i++){
        if(prime[i]) continue;
        for(int j = i * i;j <= max_n; j += i){
            prime[j] = 1;
        }
    }
}
int main () {
    init_prime();
    long long n;
    int cnt = 0;
    cin >> n;
    for(int i = 2; i <= n / 2;i++) {
        if(prime[i] || prime[n - i]) continue;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
