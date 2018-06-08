#include <iostream>
#include <ctime>
#include "Calander.hpp"

int main()
{
    std::time_t timeNow = std::time(nullptr);
    std::cout << std::ctime(&timeNow);
    std::cout << Calander::isLeapYear(2018) << std::endl;

    int wd = Calander::getWeekday(1970,1);   

    switch(wd) {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("...What?\n");
            printf("%d\n", wd);
            break;
    }

    Calander::Calander(2018, 6);
    return 0;
}