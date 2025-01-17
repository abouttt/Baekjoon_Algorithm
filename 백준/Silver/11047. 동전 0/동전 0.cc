#include <iostream>
#include <vector>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	FAST_IO;

	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for (int& i : v)
	{
		cin >> i;
	}

	int ret = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		ret += k / v[i];
		k %= v[i];
	}

	cout << ret;
}
