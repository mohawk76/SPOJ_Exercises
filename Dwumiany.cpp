#include<iostream>
#include <math.h>

using namespace std;

unsigned long long dwumian(unsigned int n, unsigned int k);

int main()
{
    std::ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--)
    {
        unsigned int n, k;
        cin >> n >> k;
        cout <<  dwumian(n, k)<< endl;
    }

    return 0;
}

unsigned long long dwumian(unsigned int n, unsigned int k)
{
    if( k == 0 || k == n || n == 0 )
        return 1;

    double wynik = 1;

    for(unsigned int i = 1; i <=k; i++)
    {
        wynik = wynik * ( n - i + 1 );
        wynik = ceil(wynik / i);
    }

    return (unsigned long long) wynik;
}
