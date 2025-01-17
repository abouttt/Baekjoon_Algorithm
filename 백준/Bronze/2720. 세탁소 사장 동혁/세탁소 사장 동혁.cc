#include <iostream>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	FAST_IO;

	int t;
	cin >> t;

	int costs[]{ 25, 10, 5, 1 };

	while (t--)
	{
		int c;
		cin >> c;

		int ret[4]{};
		for (int i = 0; i < 4; i++)
		{
			while (c >= costs[i])
			{
				c -= costs[i];
				ret[i]++;
			}
		}

		for (int i = 0; i < 4; i++)
		{
			cout << ret[i] << ' ';
		}
		cout << '\n';
	}
}
