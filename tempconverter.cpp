#include <iostream>
#include <iomanip>

int main()
{
    
    double degrees;
    char type;
    
    std::cin >> degrees >> type;
    
    double fTemp = (degrees * 1.8) + 32;
    double cTemp = (degrees - 32) / 1.8;
 
    switch(type)
    {
        case 'C':
            std::cout << std::fixed << std::setprecision(4) << degrees << " degree(s) " << type << " is equal to " << fTemp << " degree(s) F" << std::endl;
            break;
        
        case 'F':
            std::cout << std::fixed << std::setprecision(4) << degrees << " degree(s) " << type << " is equal to " << cTemp << " degree(s) C" << std::endl;
            break; 
    }
 
    return 0;
}
