#include <iostream>
using namespace std;

bool leapYear(int year)
{
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return true;
    else
        return false;
}

int main()
{
    int year;
    cin >> year;

    if(leapYear(year))
        cout << "Leap Year";
    else
        cout << "Not Leap Year";

    return 0;
}