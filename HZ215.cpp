/*************************************************************************
	> File Name: HZ215.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 May 2020 08:28:52 PM CST
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
struct student {
    int sum;
    string name;
};
int cmp(student a,student b) {
    return a.sum > b.sum;
}
int main () {
    int n;
    cin >> n;
    student stu[50];
    for(int i = 0; i < n; i++) {
        cin >> stu[i].name;
        stu[i].sum = 0;
        for(int j = 0; j < 4; j++) {
            int tmp ;
            cin >> tmp; 
            stu[i].sum += tmp;
        }
    }
    sort(stu, stu + n, cmp);
    for(int i = 0; i < 3; i++) {
        cout << stu[i].name << endl;
    }
    return 0;
}
