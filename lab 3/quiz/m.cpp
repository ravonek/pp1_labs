#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    bool isLeapYear = false;

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        isLeapYear = true;
    }
    int day;
    isLeapYear ? day = 12 : day = 13; 
    int month = 9; 

    cout << day << "/" << "0" << month << "/" << year << endl;

    return 0;
}
