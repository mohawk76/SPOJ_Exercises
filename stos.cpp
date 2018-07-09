#include<iostream>

using namespace std;

int main()
{
    char znak;
    int tab[10];
     int a, i=0;
    while(cin>>znak)
    {
        if(znak == '+')
        {
            cin >> a;

            if(i<10)
            {
                tab[i] = a;
                cout << ":)" << endl;
                i++;
            }
            else
                cout << ":(" << endl;
        }
        else if(znak == '-')
        {
            if(i<=10 && i>0)
            {
                cout << tab[i-1]<< endl;
                i--;
            }
            else
                cout << ":(" << endl;
        }
        else
            continue;
        if(cin.eof())
            break;

    }
    return 0;
}
