#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// function is passed all test cases;
bool isLeapYear(int year) {
    cout << year << endl;
    if(year < 1800){
        if(year%4==0){
            return true;
        }
        else return false; 
    }
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else return false;
}

void printNameOfTheDay(int n){
    string arr[7] = {"sunday", " monday", "tuesday", "wedesday", "thursday", "firday", "saturday"};
    cout <<  arr[n] << endl;
}

/// @brief test cases passed
/// @param date 
/// @param month 
/// @param year 
/// @return number of days
int NumberOfDaysInMonth(int date, int month, int year){
    printf("%d %d %d", date, month, year);
    int numberOfDays =0;
    for (int i = 1; i < month; i++)
    {   
        cout << "for loop running " << endl;
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
    return numberOfDays + date;
}

// calculate the leap years;
int calLeapYear(int year){
    if(year >= 1800){
        year = year - 1800;
        return (year / 4) - (year / 100) + (year / 400) ;
    }
    else return ((year-1)/4) ; 
}

// calculate the normal years;
int calNormalYear(int year){
    if(year >= 1800){
        int normalYear = (year - 1800) - calLeapYear(year);
        return normalYear;
    }
    int normalYear = year - calLeapYear(year);
    cout << "this is normal year " << normalYear << endl;
    cout << "this is leap year " << calLeapYear(year) << endl;
    return normalYear;
}

// year deviatation;
int deviatation(int date, int month, int year){
    int n = year;
    const int calibration = 4; 
    int deviatation = (calLeapYear(n)*2 + calNormalYear(n) + calibration + date)%7;
    
    return deviatation;
}

int main(){
    int date = 1;
    int month = 1;
    int year =1752;
    cout << year << endl;
    printNameOfTheDay(deviatation(date, month, year));
    return 0;
}