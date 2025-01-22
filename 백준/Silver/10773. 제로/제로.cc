#include <iostream>
#include <stack>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	FAST_IO;

	int k;
	cin >> k;

	stack<int> s;
	while (k--)
	{
		int n;
		cin >> n;

		if (n == 0)
		{
			s.pop();
		}
		else
		{
			s.push(n);
		}
	}

	int sum = 0;
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;
}
