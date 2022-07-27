 #include <iostream>
 #include <algorithm>

int main()
{
    int cols, rows, genz, count;
    std::cin >> cols >> rows >> genz;
    char matrix[cols][rows];
    char copyMatrix[cols][rows];

    for (int c = 0; c < cols; c++)
    {
        for (int r = 0; r < rows; r++)
        {
            std::cin >> matrix[c][r];
        }
    }

    std::copy(&matrix[0][0], &matrix[0][0] + cols*rows, &copyMatrix[0][0]);

    while (genz > 0)
    {
        for (int c = 0; c < cols; c++)
        {
            for (int r = 0; r < rows; r++)
            {
                if (matrix[c][r] == '.')
                {
                    count = 0;

                    if (c == 0 && r == 0)
                    {
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if (c == 0 && r == rows - 1)
                    {
                        if (matrix[c + 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if (c == cols - 1 && r == 0)
                    {
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if (c == cols - 1 && r == rows - 1)
                    {
                        if (matrix[c - 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if ((c == 0 && r > 0) && (c == 0 && r < rows - 1))
                    {
                        if (matrix[c + 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if ((c == cols - 1 && r > 0) && (c == cols - 1 && r < rows - 1))
                    {
                        if (matrix[c - 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if ((c > 0 && r == 0) && (c < cols - 1 && r == 0))
                    {
                        if (matrix[c - 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r + 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if ((c > 0 && r == rows - 1) && (c < cols - 1 && r == rows - 1))
                    {
                        if (matrix[c - 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r - 1] == '*')
                        {
                            count++;
                        }
                    }
                    else
                    {
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                    }

                    if (count == 3)
                    {
                        copyMatrix[c][r] = '*';
                    }
                }

                if (matrix[c][r] == '*')
                {
                    count = 0;

                    if (c == 0 && r == 0)
                    {
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if (c == 0 && r == rows - 1)
                    {
                        if (matrix[c + 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if (c == cols - 1 && r == 0)
                    {
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if (c == cols - 1 && r == rows - 1)
                    {
                        if (matrix[c - 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if ((c == 0 && r > 0) && (c == 0 && r < rows - 1))
                    {
                        if (matrix[c + 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if ((c == cols - 1 && r > 0) && (c == cols - 1 && r < rows - 1))
                    {
                        if (matrix[c - 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if ((c > 0 && r == 0) && (c < cols - 1 && r == 0))
                    {
                        if (matrix[c - 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r + 1] == '*')
                        {
                            count++;
                        }
                    }
                    else if ((c > 0 && r == rows - 1) && (c < cols - 1 && r == rows - 1))
                    {
                        if (matrix[c - 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r - 1] == '*')
                        {
                            count++;
                        }
                    }
                    else
                    {
                        if (matrix[c - 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c - 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c + 1][r + 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r - 1] == '*')
                        {
                            count++;
                        }
                        if (matrix[c][r + 1] == '*')
                        {
                            count++;
                        }
                    }

                    if (count < 2)
                    {
                        copyMatrix[c][r] = '.';
                    }
                    if (count > 3)
                    {
                        copyMatrix[c][r] = '.';
                    }
                }
            }
        }
        std::copy(&copyMatrix[0][0], &copyMatrix[0][0] + cols*rows, &matrix[0][0]);
        genz--;
    }

    for (int c = 0; c < cols; c++)
    {
        for (int r = 0; r < rows; r++)
        {
            std::cout << copyMatrix[c][r];

            if (r < rows - 1)
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
