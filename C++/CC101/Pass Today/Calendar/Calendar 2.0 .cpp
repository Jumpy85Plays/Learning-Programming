#include <cmath>
#include <iostream>
using namespace std;

int month, day, year, start;

#define MONTHS_PER_YEAR 12 // Cannot change.

const unsigned short DAYS_PER_MONTH[MONTHS_PER_YEAR] =
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Cannot change.

const char MONTH_NAMES[MONTHS_PER_YEAR][10] =
    {"January",   "February", "March",    "April",
     "May",       "June",     "July",     "August",
     "September", "October",  "November", "December"}; // Cannot change.

bool leapYear()
{
    if (((year % 4 == 0) && year % 100 != 0) || year % 400 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
//I actually do not think I am supposed to use static.

int day_of()
{
    
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year = year - month < 3;
    return ( year + year /4 - year /100 + year /400 + t[month-1] + day) % 7;
}

void printMonth()
{
    start = day_of();
    int count, days_in_month = DAYS_PER_MONTH[month - 1];
    if (leapYear() && month == 2)
    {
        days_in_month = DAYS_PER_MONTH[month - 1] + 1;
    }
    if (start == 6)
    {
        start = -1;
        cout << " ";
    } 
    for (count = 0; count <= start; count++)
    {
        cout << (count > 0? "   ": "    ");

    }
    for (day = 1; day <= days_in_month; day++)
    {
        if (++count > 6)
        {
            count = 0;
            if (day > 9)
            {
                cout << day << '\n';
            }
            else
            {
                cout << day << '\n' << " ";
            }
        }
        else
        {
            if (day >= 9)
            {
                cout << day;
            }
            else
            {
                cout << day << " ";
            }
            cout << " ";
        }
    }
    cout << endl;
}

// Controls operation of the program.
int main()
{
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << MONTH_NAMES[month - 1] << " " << year << std::endl;
    cout << "Su" << "  "<< "M" << "  "<< "T"<< "  " << "W" << " " << "Th" << "  " << "F" << " " << "Sa\n";
    printMonth();
    cout << endl;
    return 0;
}