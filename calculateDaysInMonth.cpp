#include <iostream>
using namespace std;


/// @brief all test cases passed funciton works as it should
/// @param year 
/// @return true or false
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

// int NumberOfDaysInMonth(int date, int month, int year){
//     printf("%d %d %d", date, month, year);
//     int numberOfDays =0;
//     for (int i = 1; i <= month; i++)
//     {   
//         cout << "for loop running " << endl;
//         if(i==2){
//             if(isLeapYear(year)) numberOfDays+= 29;
//             else numberOfDays += 28;
//             continue;
//         }
//         if(i<8){
//             if(i%2==0){
//                 numberOfDays+=30;
//             }
//             else numberOfDays+=31;
//         }
//         else {
//             if(i%2==0){
//                 numberOfDays+=31;
//             }
//             else numberOfDays+=30;
//         }
//     }
//     return numberOfDays + date-1;
// }


int NumberOfDaysInMonth(int date, int month, int year){
    printf("%d %d %d\n", date, month, year);
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

int main(){
    int num = NumberOfDaysInMonth(1,10,1800);
    cout << num << endl;

    return 0;
}