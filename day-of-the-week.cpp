#include <iostream>
#include <cmath>

int main()
{
    int day, month, year;

    std::cin >> day >> month >> year;

    if(month == 1)
    {
        month = 13;
        year -= 1;
    }

    if(month == 2)
    {
        month = 14;
        year -= 1;
    }

    int weekday;

    double monthMth = ((month + 1) * 26)/10;

    int century = year / 100;

    int yearPart = year % 100;

    weekday = (day + floor(monthMth) + yearPart + floor(yearPart/4) + floor(century/4) + (5 * century));
    weekday = weekday % 7;

    switch(weekday)
    {
        case 0:
            std::cout << "Saturday" << std::endl;
            break;

        case 1:
            std::cout << "Sunday" << std::endl;
            break;

        case 2:
            std::cout << "Monday" << std::endl;
            break;

        case 3:
            std::cout << "Tuesday" << std::endl;
            break;

        case 4:
            std::cout << "Wednesday" << std::endl;
            break;

        case 5:
            std::cout << "Thursday" << std::endl;
            break;

        case 6:
            std::cout << "Friday" << std::endl;
            break;
    }

    return 0;
}
