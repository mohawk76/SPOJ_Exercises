#include <iostream>
struct punkt
{
    double x, y;
};
int main()
{
    int test;
    std::cin >> test;
    if(test>1 && test<=100)
    {
        for(int i=0;i<test;i++)
        {
            punkt tab[3];
            for(int k=0; k<3;k++)
            {
                std::cin >> tab[k].x;
                std::cin >> tab[k].y;
                if(!(tab[k].x>=-1000 && tab[k].x<=1000 && tab[k].y>=-1000 && tab[k].y<=1000))
                {
                    tab[k].x=0;
                    tab[k].y=0;
                }

            }
            double wspol12;
            double wspol23;

            if((tab[2].x-tab[1].x==0))
                wspol12=0;
            if((tab[1].x-tab[0].x==0))
                wspol23=0;
            if(tab[1].x-tab[0].x!=0 && tab[2].x-tab[1].x!=0)
            {
            wspol12=(tab[1].y-tab[0].y)/(tab[1].x-tab[0].x);
            wspol23=(tab[2].y-tab[1].y)/(tab[2].x-tab[1].x);
            }
            if(wspol12==wspol23)
                std::cout << "TAK" << std::endl;
            else
                std::cout << "NIE" << std::endl;
        }
    }
    return 0;
}
