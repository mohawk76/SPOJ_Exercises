#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string x;
		cin >> x;
		string r(x);
		reverse(r.begin(), r.end());
		int licznik = 0;
		while (x != r)
		{
			x = r = to_string(stoi(x) + stoi(r));
			reverse(r.begin(), r.end());
			licznik++;
		}
		cout << x << " " << licznik << endl;
	}
    return 0;
}
