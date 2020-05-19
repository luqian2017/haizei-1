/*************************************************************************
	> File Name: HZ220.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 10:28:56 AM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct stu {
    string name;
    int lan;
    int math;
    int eng;
    int sen;
    int sum;
};
bool cmp1(stu a, stu b) {
    if(a.lan == b.lan) return a.name < b.name;
    return a.lan > b.lan;
}
bool cmp2(stu a, stu b) {
    if(a.math == b.math) return a.name < b.name;
    return a.math > b.math;
}
bool cmp3(stu a, stu b) {
    if(a.eng == b.eng) return a.name < b.name;
    return a.eng > b.eng;
}
bool cmp4(stu a, stu b) {
    if(a.sen == b.sen) return a.name < b.name;
    return a.sen > b.sen;
}
bool cmp5(stu a, stu b) {
    if(a.sum == b.sum) return a.name < b.name;
    return a.sum > b.sum;
}
stu a[105] ;
int main () {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].lan >> a[i].math >> a[i].eng >> a[i].sen ;
        a[i].sum = a[i].lan + a[i].math + a[i].eng + a[i].sen;
    }
    sort(a,a + n,cmp1);
    for(int i = 0; i < 4; i++) {
        if(i) cout << " ";
        cout << a[i].name;
    }
    cout << endl;
    sort(a,a + n,cmp2);
    for(int i = 0; i < 4; i++) {
        if(i) cout << " ";
        cout << a[i].name;
    }
    cout << endl;
    sort(a,a + n,cmp3);
    for(int i = 0; i < 4; i++) {
        if(i) cout << " ";
        cout << a[i].name;
    }
    cout << endl;
    sort(a,a + n,cmp4);
    for(int i = 0; i < 4; i++) {
        if(i) cout << " ";
        cout << a[i].name;
    }
    cout << endl;
    sort(a,a + n,cmp5);
    for(int i = 0; i < 4; i++) {
        if(i) cout << " ";
        cout << a[i].name;
    }
    cout << endl;
    return 0;
}
