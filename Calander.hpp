#include <ctime>
#include <iostream>
#include <iomanip> //Just for setw() setfill()

namespace Calander
{
    bool isLeapYear(int year);
    void Calander(int year, int month);
    int  getWeekday(int year, int month);
}

/*
 * 유닉스 시간으로 사용되는 1970년 1월 1일은 목요일이다.
 * 이 사실을 바탕으로 달력을 만들어보자.
 * 1년이 추가될때마다 요일이 하나씩 늦춰진다.
 */

bool Calander::isLeapYear(int year)
{
    if      (  year%400 == 0  )  return true;
    else if (  year%100 == 0  )  return false;
    else if (  year%4   == 0  )  return true;
    else                         return false;
}

void Calander::Calander(int year, int month)
{
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(  isLeapYear(year)  )   days[1] = 29;

    std::cout << "========= "
              << std::setw(2) << std::setfill('0') << year
              << "."
              << std::setw(2) << std::setfill('0') << month
              << " ========="  << std::endl;

    std::cout << "sun\tmon\ttue\twed\tthu\tfri\tsat\n";
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