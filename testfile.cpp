#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year){
    if(year < 1800){
        if (year%4 ==0) return true;
    return false;
    }
    if((year%4==0 and year%100 != 0) or (year%400 == 0)) return true;
    return false;
}

int main(){

    int year = 1800;
    cout << isLeapYear(year) << endl;


    return 0;
}                         