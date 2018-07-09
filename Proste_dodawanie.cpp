#include<iostream>

using namespace std;

int  main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int * tab=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>tab[j];
        }
        int suma =0;
        for(int j=0;j<n;j++)
            suma+=tab[j];
        delete [] suma;
        cout<<suma<<endl;
    }
    return 0;
}
