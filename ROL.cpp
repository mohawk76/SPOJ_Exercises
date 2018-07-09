#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int tab[100];
        int n;

        cin >> n;

        for(int i=0; i<n; i++)
        {
            if(i==0)
                cin >> tab[n-1];
            else
                cin >> tab[i-1];
        }

        for(int i=0; i<n; i++)
        {
            cout << tab[i] << " ";
        }
        cout<<endl;
    }
    return 0;
}
