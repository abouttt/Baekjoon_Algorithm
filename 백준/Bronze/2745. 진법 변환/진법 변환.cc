#include <iostream>
#include <cmath>
#include <string>

using namespace std;
using ll = long long;

inline void FastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
	FastIO();

	string n;
	int b;

	cin >> n >> b;

	int sum = 0;

	for (int i = 0; i < n.size(); i++)
	{
		char ch = n[n.size() - 1 - i];
		if ('0' <= ch && ch <= '9')
		{
			sum += (ch - '0') * pow(b, i);
		}
		else
		{
			sum += (ch - 'A' + 10) * pow(b, i);
		}
	}

	cout << sum;
}