#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int matrix[3][3];
    int checkMatrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 0}};
    int i = 0;
    std::string sequence;

    for (int c = 0; c < 3; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            std::cin >> matrix[c][r];
        }
    }

    std::cin.ignore();
    std::getline(std::cin, sequence);

    while(i < sequence.length())
    {
        if (matrix[0][0] == 0)
        {
            if (sequence[i] == 'D')
            {
                std::swap(matrix[0][0], matrix[1][0]);
            }
            if (sequence[i] == 'R')
            {
                std::swap(matrix[0][0], matrix[0][1]);
            }
        }
        else if (matrix[0][1] == 0)
        {
            if (sequence[i] == 'R')
            {
                std::swap(matrix[0][1], matrix[0][2]);
            }
            if (sequence[i] == 'L')
            {
                std::swap(matrix[0][1], matrix[0][0]);
            }
            if (sequence[i] == 'D')
            {
                std::swap(matrix[0][1], matrix[1][1]);
            }
        }
        else if (matrix[0][2] == 0)
        {
            if (sequence[i] == 'L')
            {
                std::swap(matrix[0][2], matrix[0][1]);
            }
            if (sequence[i] == 'D')
            {
                std::swap(matrix[0][2], matrix[1][2]);
            }
        }
        else if (matrix[1][0] == 0)
        {
            if (sequence[i] == 'U')
            {
                std::swap(matrix[1][0], matrix[0][0]);
            }
            if (sequence[i] == 'R')
            {
                std::swap(matrix[1][0], matrix[1][1]);
            }
            if (sequence[i] == 'D')
            {
                std::swap(matrix[1][0], matrix[2][0]);
            }
        }
        else if (matrix[1][1] == 0)
        {
            if (sequence[i] == 'U')
            {
                std::swap(matrix[1][1], matrix[0][1]);
            }
            if (sequence[i] == 'R')
            {
                std::swap(matrix[1][1], matrix[1][2]);
            }
            if (sequence[i] == 'L')
            {
                std::swap(matrix[1][1], matrix[1][0]);
            }
            if (sequence[i] == 'D')
            {
                std::swap(matrix[1][1], matrix[2][1]);
            }
        }
        else if (matrix[1][2] == 0)
        {
            if (sequence[i] == 'D')
            {
                std::swap(matrix[1][2], matrix[2][2]);
            }
            if (sequence[i] == 'U')
            {
                std::swap(matrix[1][2], matrix[0][2]);
            }
            if (sequence[i] == 'L')
            {
                std::swap(matrix[1][2], matrix[1][1]);
            }
        }
        else if (matrix[2][0] == 0)
        {
            if (sequence[i] == 'U')
            {
                std::swap(matrix[2][0], matrix[1][0]);
            }
            if (sequence[i] == 'R')
            {
                std::swap(matrix[2][0], matrix[2][1]);
            }
        }
        else if (matrix[2][1] == 0)
        {
            if (sequence[i] == 'U')
            {
                std::swap(matrix[2][1], matrix[1][1]);
            }
            if (sequence[i] == 'R')
            {
                std::swap(matrix[2][1], matrix[2][2]);
            }
            if (sequence[i] == 'L')
            {
                std::swap(matrix[2][1], matrix[2][0]);
            }
        }
        else if (matrix[2][2] == 0)
        {
            if (sequence[i] == 'U')
            {
                std::swap(matrix[2][2], matrix[1][2]);
            }
            if (sequence[i] == 'L')
            {
                std::swap(matrix[2][2], matrix[2][1]);
            }
        }
        else
        {
            continue;
        }

        i += 2;
    }

    for (int c = 0; c < 3; c++)
    {
        for (int r = 0; r < 3; r++)
        {
            if (matrix[c][r] != checkMatrix[c][r])
            {
                std::cout << "Wrong solution!" << std::endl;
                return 0;
            }
        }
    }
    std::cout << "Solution is good!" << std::endl;
    return 0;
}
