#include <iostream>
#include <string>
#include <stdlib.h>
int main()
{

    unsigned int test;
    std::cin >> test;
    for(int i=0;i<test;i++)
    {
        std::string pesel;
        int pesel1[11];
        std::cin >> pesel;
        int suma = 0;

        for(int i=0;i<pesel.length();i++)
        {
            pesel1[i] = pesel[i] - '0';

        }

        suma =pesel1[0]+ (pesel1[1] * 3) + (pesel1[2] * 7) + (pesel1[3] * 9) +pesel1[4]+ (pesel1[5] * 3) + (pesel1[6] * 7) + (pesel1[7] * 9) + pesel1[8] +(pesel1[9] * 3)+pesel1[10];
        if (suma % 10 == 0)
            std::cout << 'D' << std::endl;
        else
            std::cout << 'N' << std::endl;

    }
    return 0;
}
