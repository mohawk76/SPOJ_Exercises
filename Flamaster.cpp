#include <iostream>
#include <string>

using namespace std;

int main()
{
    string wyraz;
    unsigned int ilosc;

    while(!(std::cin >> ilosc&&ilosc<=50&&ilosc>=1))
    {
        cin.clear();
        cin.sync();
    }
    for(int i=0;i<ilosc;i++)
    {

        std::cin >> wyraz;
        wyraz+='0';
            char * q=&wyraz[0];
            int licznik=0;
          for(int p=0; p<wyraz.length(); ++p)
          {

           if(*q==wyraz[p])
                ++licznik;
           else if(*q!=wyraz[p])
           {
            if(licznik>2)
            {
                cout<<*q;
                cout<<licznik;
            }
            else if(licznik==2)
            {
                cout<<*q;
                cout<<*q;
            }
            else
            {
                cout<<*q;
            }

            licznik=1;
            q=NULL;
            q=&wyraz[p];
           }

          }
          cout<<endl;
    }

    return 0;
}
