#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    int width = num * 4;
    int length = num * 2;
    int upTo = num;
    int downTo = num;
    int spaceZ = ((width + 2) / 2) - 3;

//top
    std::cout << "#";
    for (int i = 1; i <= width; i++)
    {
        std::cout << "=";
    }
    std::cout << "#" << std::endl;
//top

//top middle
    for (int m = 1; m <= length / 2; m++)
    {
        std::cout << "|";
      
        for (int space = 1; space <= spaceZ ; space++)
        {
            std::cout << " ";
        }
      
        std::cout << "<>";

        for (int n = upTo; n < num; n++)
        {
            std::cout << "....";
        }

        std::cout << "<>";

        for (int space = 1; space <= spaceZ ; space++)
        {
            std::cout << " ";
        }

        std::cout << "|";

        upTo--;

        spaceZ -= 2;

        std::cout << std::endl;
    }

//bottom middle
    spaceZ += 2;

    for (int m = length / 2; m < length; m++)
        {
            std::cout << "|";

            for (int space = 1; space <= spaceZ ; space++)
            {
                std::cout << " ";
            }

            std::cout << "<>";

            for (int n = 1; n < downTo; n++)
            {
                std::cout << "....";
            }

            std::cout << "<>";

            for (int space = 1; space <= spaceZ ; space++)
            {
                std::cout << " ";
            }

            std::cout << "|";

            downTo--;

            spaceZ += 2;

            std::cout << std::endl;
        }

//bottom
    std::cout << "#";
    for (int j = 1; j <= width; j++)
    {
        std::cout << "=";
    }
    std::cout << "#" << std::endl;;
//bottom

    return 0;
}
