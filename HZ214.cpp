/*************************************************************************
	> File Name: HZ214.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 17 May 2020 07:43:17 PM CST
 ************************************************************************/

#include<iostream>
#include<>
using namespace std;
int main() {
   int n, m, num[35];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i]; 
}
    cin >> m;
            sort(num, num + n, cmp);
            int sum = 0;
        for (int i = 0; i < m; i++) {
                    sum += num[i];
       }
            printf("%.2f\n", 1.0 * sum / m);
            return 0;

    }}
