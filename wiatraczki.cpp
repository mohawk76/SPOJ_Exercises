#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n ;
    while(1)
    {
    cin >> n;
    if(n==0)
        break;

    char tab[200][200];
    for(int i = 0 ; i < 2*n ; i++)
    {
        for(int k = 0 ; k < 2*n ; k++)
        {
            tab[i][k] = '.';
        }
    }


        for(int i = 0,p=0 ; i < n ; i++,p++)
        {
        tab[n-p-1][n-p-1] = '*';
          tab[n-p-1][n+p] = '*';
           tab[n+p][n-p-1] = '*';
             tab[n+p][n+p] = '*';

        for(int k = 1 ; k + p < n ; k++)
          {  //tab[n-p-1][n-p-1-k] = '*';
            tab[n-p-1-k][n+p] = '*';
            tab[n+p+k][n-p-1] = '*';
            tab[n+p][n+p+k] = '*';

            //tab[n-p+1-k][n-p-1] = '*';
           // tab[n-p-1][n+p+k] = '*';
            tab[n-p-1][n-p-1-k] = '*';
           // tab[n+p+k][n+p] = '*';
            }
          }





    for(int i = 0 ; i < 2*n ; i++)
    {
        for(int k = 0 ; k < 2*n ; k++)
        {
            cout << tab[i][k];
        }
        cout << endl;
    }
    }

system("pause");
    return 0;
}
