#include <iostream>
#include <vector>
#include <iomanip>

double getPercentage(int numClass)
{
    int grades[numClass];
    double aboveAve;
    int gradeTotal = 0;
    int count = 0;
    int divider = numClass * 100;
    double percent;

    for(int i = 0; i < numClass; i++)
    {
        std::cin >> grades[i];
    }
    for(int j = 0; j < numClass; j++)
    {
        gradeTotal += grades[j];
    }

    aboveAve = gradeTotal / numClass;

    for(int n = 0; n < numClass; n++)
    {
        if(grades[n] > aboveAve)
        {
            count++;
        }
    }

    percent = (double(count) / numClass) * 100;

    return percent;
}

int main()
{
    int testCases;
    std::cin >> testCases;
    int numClass = 0;
    double percent;
    std::vector < double > allPercent;

    for(int test = 0; test < testCases; test++)
    {
        std::cin >> numClass;
      
        for(int gradeRows = 0; gradeRows < 1; gradeRows++)
        {
                percent = getPercentage(numClass);
                allPercent.push_back(percent);
        }
    }

    for(int k = 0; k < allPercent.size(); k++)
    {
        std::cout << std::fixed << std::setprecision(3) << allPercent[k] << "%" << std::endl;
    }
    return 0;
}
