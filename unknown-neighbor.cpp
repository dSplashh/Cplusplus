#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
#include <algorithm>

struct CartesianPoints
{
    double x;
    double y;
    char label;
};

void createObject(std::vector < CartesianPoints > &Point, int num)
{
    for (int i = 0; i < num; i++)
    {
        std::cin >> Point[i].x;
        std::cin >> Point[i].y;
        std::cin >> Point[i].label;
    }
}

void getDistance(std::vector < CartesianPoints > &Point, std::vector < std::pair < double, int > > &distances, double unclassX, double unclassY, int num)
{
    double distance;

    for (int i = 0; i < num; i++)
    {
       distance = sqrt(pow(unclassX - Point[i].x, 2) + pow(unclassY - Point[i].y, 2));
       distances.push_back(std::make_pair(distance, i));
    }
}

int main()
{
    int n, k, blueCount = 0, redCount = 0;
    double unclassX, unclassY;
    std::cin >> n >> k;

    std::vector < CartesianPoints > Point(n);
    std::vector < std::pair < double, int > > distances;

    createObject(Point, n);

    std::cin >> unclassX >> unclassY;

    getDistance(Point, distances, unclassX, unclassY, n);

    std::sort(distances.begin(), distances.end());

    for (int i = 0; i < k; i++)
    {
        if (Point[distances[i].second].label == 'B')
        {
            blueCount++;
        }
        else
        {
            redCount++;
        }
    }

    if (blueCount > redCount)
    {
        std::cout << "B" << std::endl;
    }
    else
    {
        std::cout << "R" << std::endl;
    }
    return 0;
}
