#include <iostream>
#include <cmath>
#include <string.h>
struct punkt
{
    char nazwa[11];
    int x;
    int y;
    int odleglosc;
};
int main()
{
    int test;
    std::cin >> test;
    if(test>1&&test<100)
    {
        for(int i=0;i<test;i++)
        {
            int n;
            std::cin >> n;
            punkt * tab=new punkt[n];
            if(n>=1 && n<=1000)
            {

                for(int k=0;k<n;k++)
                {
                    std::cin>>tab[k].nazwa>>tab[k].x>>tab[k].y;
                        tab[k].odleglosc=pow(tab[k].y,2)+pow(tab[k].x,2);
                }
                for(int j=0; j<n;j++)
                {
                    for(int p=0;p<n;p++)
                    {
                        if(tab[j].odleglosc<tab[p].odleglosc)
                        {
                            punkt temp=tab[j];
                            tab[j]=tab[p];
                            tab[p]=temp;
                        }
                    }
                }
            }
            for(int t=0;t<n;t++)
            {
                std::cout << tab[t].nazwa << " " << tab[t].x << " " << tab[t].y << std::endl;
            }
            delete [] tab;
        }
    }


    return 0;
}
