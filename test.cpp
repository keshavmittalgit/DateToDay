#include <bits/stdc++.h>
using namespace std;



// calculate the days in months;
int NumberOfDaysInMonth(int month){
    int numberOfDays =0;
    for (int i = 1; i < month; i++)
    {   
        if(i==2){
            numberOfDays+= 28;
            continue;
        }
        if(i<8){
            if(i%2==0){
                numberOfDays+=30;
            }
            else numberOfDays+=31;
        }
        else {
            if(i%2==0){
                numberOfDays+=31;
            }
            else numberOfDays+=30;
        }
    }
    return numberOfDays;
}

// calculate the leap years;
int calLeapYear(int year){
   return (year / 4) - (year / 100) + (year / 400); 
}

// calculate the normal years;
int calNormalYear(int year){
    return year - calLeapYear(year);
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
    int test = 3;
    cout << NumberOfDaysInMonth(test) << endl;
    return 0;
}