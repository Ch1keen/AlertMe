#include <ctime>
#include <iostream>
#include <iomanip> //Just for setw() setfill()

namespace Calander
{
    bool isLeapYear(int year);
    void calander(int year, int month);
    int  getWeekday(int year, int month);
}