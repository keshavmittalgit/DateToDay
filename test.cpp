
#include <bits/stdc++.h>

using namespace std;

// calculate the leap years;
int calLeapYear(int n){
   return (n / 4) - (n / 100) + (n / 400); 
}
// calculate the normal years;
int calNormalYear(int n){
    return n - calLeapYear(n);
}
// year deviatation;
int deviatation(int year){

    
    int d = (calLeapYear(year)*2 + calNormalYear(year)+5)%7;
    if(year%4 == 0) {
        d--;
    }




    
    return d;
}

int main(){
    int year = 5;
    cout << deviatation(year) << endl;
    return 0;
}