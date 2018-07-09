#include<iostream>

using namespace std;

int main()
{
int t;
while(!(cin>>t)&&!(t<=100))
{
    cin.clear();
    cin.sync();
}
for(int i=0;i<t;i++)
{
    int n;
    while(!(cin>>n)&&!(n<=100))
    {
        cin.clear();
        cin.sync();
    }
    int * tab=new int[n];
    int j=n-1;
    for(j;j>=0;j--)
    {
        cin>>tab[j];
    }
    for(int k=0;k<n;k++)
        cout<<tab[k]<<" ";
    cout<<endl;
    delete [] tab;
}
return 0;
}
