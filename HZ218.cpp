/*************************************************************************
	> File Name: HZ218.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 18 May 2020 09:55:45 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#define max_n 100000
using namespace std;
struct student {
    int h,num;
};
bool cmp(student a,student b) {
    if(a.h == b.h) return a.num < b.num;
    return a.h < b.h;
}
student stu[max_n + 5];
int main () {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> stu[i].h;
        stu[i].num = i + 1;
    }
    sort(stu, stu + n,cmp);
    for(int i = 0; i < n; i++) {
        if(i) cout << " " ;
        cout << stu[i].num ;
    }
    cout << endl;
    return 0;
}
