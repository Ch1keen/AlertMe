#include <ctime>

/*
 * 유닉스 시간으로 사용되는 1970년 1월 1일은 목요일이다.
 * 이 사실을 바탕으로 달력을 만들어보자.
 * 1년이 추가될때마다 요일이 하나씩 늦춰진다.
 */

namespace Calander {
    
    bool isLeapYear(int year)
    {
        if      (  year%400 == 0  )  return true;
        else if (  year%100 == 0  )  return false;
        else if (  year%4   == 0  )  return true;
        else                         return false;
    }

    void Calander(int year, int month)
    {
        int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if(  isLeapYear(year)  )   days[2] = 29;

            }

    // Calculates the week of the day
    // For Example, 1970/01/01 was Thursday
    int getWeekday(int year, int month)
    {
        int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if (  isLeapYear(year)  )   days[1] = 29;

        int weekday = 4;
        for(int y=1970; y<year; y++)
        {
            isLeapYear(y)  ?  weekday+=2 : weekday++;
        }
        weekday %= 7;

        for(int d=0; d<month-1; d++)
        {
            weekday += days[d];
        }

        return weekday%7;
    }
}