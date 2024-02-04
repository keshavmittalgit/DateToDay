#include <bits/stdc++.h>
#include <iostream>
using namespace std;


bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else return false;
}
void print(int n){
    string arr[7] = {"sunday", " monday", "tuesday", "wedesday", "thursday", "firday", "saturday"};
    cout <<  arr[n] << endl;
}

// calculate the days in months;
int NumberOfDaysInMonth(int date, int month, int year){
    
    int numberOfDays =0;
    for (int i = 1; i < month; i++)
    {   
        if(i==2){
            if(isLeapYear(year)) numberOfDays+= 29;
            else numberOfDays += 28;
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
    return numberOfDays + date-1;
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
int deviatation(int date, int month, int year){
    int n = year-1;
    int deviatation = (calLeapYear(n)*2 + calNormalYear(n)+6)%7;
    deviatation = (NumberOfDaysInMonth(date, month, year) + deviatation)%7;
    return deviatation;
}

int main(){
    int date = 4;
    int month = 3;
    int year = 100;
    print(deviatation(date, month, year));
    return 0;
}