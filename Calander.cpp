#include "Calander.hpp"

bool Calander::isLeapYear(int year)
{
    if      (  year%400 == 0  )  return true;
    else if (  year%100 == 0  )  return false;
    else if (  year%4   == 0  )  return true;
    else                         return false;
}

void Calander::calander(int year, int month)
{
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(  isLeapYear(year)  )   days[1] = 29;

    std::cout << "===================== "
              << std::setw(2) << std::setfill('0') << year
              << "."
              << std::setw(2) << std::setfill('0') << month
              << " ===================="  << std::endl;

    std::cout << "SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n";
    int weekday = getWeekday(year, month);

    for(int j=0; j<getWeekday(year, month); j++)    std::cout << "\t";
    for(int j=1; j<=days[month-1]; j++)
    {
        std::cout << std::setw(2) << std::setfill('0') << j
                  << "\t";
        if( (j%7 == (7-weekday)) && !(j == days[month-1]) ) std::cout << std::endl;
    }

    std::cout << std::endl;
} 

// Calculates the week of the day
// For Example, 1970/01/01 was Thursday
int Calander::getWeekday(int year, int month)
{
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (  isLeapYear(year)  )   days[1] = 29;

    int weekday = 4;
    for(int y=1970; y<year; y++)
    {
        isLeapYear(y)  ?  weekday+=2 : weekday++;
    }
    weekday %= 7;

    for(int d=0; d<month; d++)
    {
        weekday += days[d-1];
    }
    return weekday%7;
}