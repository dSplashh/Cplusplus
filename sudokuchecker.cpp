#include <iostream>

void createSudoku(int matrix[9][9])
{
    matrix[9][9];

    for (int c = 0; c < 9; c++)
    {
        for (int r = 0; r < 9; r++)
        {
            std::cin >> matrix[c][r];
        }
    }
}

int sudokuCheck(int matrix[9][9])
{
    matrix[9][9];
    int count;

    for (int c = 0; c < 9; c++)
    {
        count = 0;

        for (int r = 0; r < 9; r++)
        {
            count += matrix[c][r];
        }
        if (count != 45)
        {
            std::cout << "Wrong solution!" << std::endl;
            exit(0);
        }
    }
    return 0;
}

int sudokuCheck2(int matrix[9][9], int cstart, int rstart)
{
    matrix[9][9];
    int count = 0;

    for (int c = cstart; c < cstart + 3; c++)
    {
        for (int r = rstart; r < rstart + 3; r++)
        {
            count += matrix[c][r];
        }
    }
    if (count != 45)
    {
        std::cout << "Wrong solution!" << std::endl;
        exit(0);
    }

    sudokuCheck(matrix);

    return 0;
}

int main(){

    int matrix[9][9];
  
    createSudoku(matrix);

    for (int c = 0; c < 9; c += 3)
    {
        for (int r = 0; r < 9; r += 3)
        {
            sudokuCheck2(matrix, c, r);
        }
    }
    std::cout << "Solution is good!" << std::endl;

    return 0;
}
