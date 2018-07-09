#include<iostream>

using namespace std;

int main()
{
    int n;
    int k;

    cin>>n>>k;

     int * tab = new int[n];
    for(int i=0; i<n;i++)
        cin>>tab[i];
    for(int p=0;p<k;p++)
    {
        int buf=tab[0];
        for(int i = 0; i < n - 1; ++i )
            tab[ i ] = tab[ i + 1 ];
        tab[n-1]=buf;
    }
    for(int i=0;i<n;i++)
    {
        cout<<tab[i]<<" ";
    }
    delete [] tab;
}
