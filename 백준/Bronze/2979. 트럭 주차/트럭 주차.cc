#include <iostream>
#include <algorithm>

using namespace std;

inline void FastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	FastIO();

	int pay[3]{};
	for (int i = 0; i < 3; i++)
	{
		cin >> pay[i];
	}

	int cnt[100]{};
	int min = 100;
	int max = 0;
	for (int i = 0; i < 3; i++)
	{
		int start, end;
		cin >> start >> end;

		min = std::min(start, min);
		max = std::max(end, max);

		for (int j = start; j < end; j++)
		{
			cnt[j]++;
		}
	}

	int sum = 0;
	for (int i = min; i < max; i++)
	{
		sum += pay[cnt[i] - 1] * cnt[i];
	}

	cout << sum;
}
