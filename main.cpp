#include <iostream>
#include <ctime>
#include "Calander.hpp"

int main()
{
    std::time_t timeNow = std::time(nullptr);
    std::cout << std::ctime(&timeNow);
    std::cout << Calander::isLeapYear(2018) << std::endl;

    int wd = Calander::getWeekday(2018,5);   

    switch(wd) {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        default:
            printf("...What?\n");
            printf("%d\n", wd);
            break;
    }
    return 0;
}