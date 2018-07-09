#include <iostream>
#include <math.h>

int main()
{
    float a, b, c;
    do
    {
        a = b = c = NULL;
        std::cin >> a >> b >> c;
        float wynik = pow(b,2) - 4 * a * c;
        if(wynik>0)
        {
            std::cout << 2 << std::endl;
        }
        else if(wynik == 0)
        {
            std::cout << 1<< std::endl;
        }
        else if(wynik < 0)
        {
            std::cout << 0 << std::endl;
        }
    }while(a!=NULL || b!=NULL || c!=NULL);
    return 0;
}
