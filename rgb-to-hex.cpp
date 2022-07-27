#include <iostream>

int main()
{
    char alphabet[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int r, g, b;
    std::cin >> r >> g >> b;
    int currentNum = 0;
    int count = 0;

    std::cout << "#";

    if (r == 0)
    {
        std::cout << alphabet[r];
        std::cout << alphabet[r];
    }
    else
    {
        do
        {
            if (r < 16)
            {
                currentNum = r;
                r -= r;
                count++;
                 if (count == 1)
                {
                    std::cout << alphabet[r];
                    count++;
                }
            }
            else
            {
                currentNum = (r / 16);
                r -= currentNum * 16;
                count++;
            }
            std::cout << alphabet[currentNum];
        }
        while (r > 0);
      
        if (count < 2)
        {
            std::cout << alphabet[r];
        }
    }

    count = 0;

     if (g == 0)
    {
        std::cout << alphabet[g];
        std::cout << alphabet[g];
    }
    else
    {
        do
        {
            if (g < 16)
            {
                currentNum = g;
                g -= g;
                count++;
                if (count == 1)
                {
                    std::cout << alphabet[g];
                    count++;
                }
            }
            else
            {
                currentNum = (g / 16);
                g -= currentNum * 16;
                count++;
            }
            std::cout << alphabet[currentNum];
        }
        while (g > 0);

         if (count < 2)
        {
            std::cout << alphabet[g];
        }
    }

    count = 0;

      if (b == 0)
    {
        std::cout << alphabet[b];
        std::cout << alphabet[b];
    }
    else
    {
        do
        {
            if (b < 16)
            {
                currentNum = b;
                b -= b;
                count++;
                if (count == 1)
                {
                    std::cout << alphabet[g];
                    count++;
                }
            }
            else
            {
                currentNum = (b / 16);
                b -= currentNum * 16;
                count++;
            }
            std::cout << alphabet[currentNum];
        }
        while (b > 0);

       if (count < 2)
       {
            std::cout << alphabet[b];
       }
    }

    std::cout << std::endl;

    return 0;
}
