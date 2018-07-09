#include<iostream>
#include<cstdlib>
#include <math.h>

using namespace std;

bool TestPierwsza(const long long & n );

int main()
{
  int n;
  long long int p;

  cin>>n;

  bool * tab=new bool[n+1];

  for(int i=0;i<n;i++)
  {
    cin>>p;
    tab[i]=TestPierwsza(p);
    }
    for(int i=0;i<n;i++)
    if(tab[i])
        cout<<"TAK"<<endl;
    else
        cout<<"NIE"<<endl;
    system("pause");
    return 0;
}

bool TestPierwsza(const long long &  n)
{
 long long int p=1;

 if (n == 1)
  return false;

 for (int i=1; i<n; i++)
 {
  if (n%i == 0)
   {
    p++;
    if (p>2)
     return false;
   }
 }
 return true;
}

