#include <iostream>
#include <algorithm>
#include <string>

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

	string s;
	getline(cin, s);

	for (char& c : s)
	{
		if (!isalpha(c))
		{
			continue;
		}

		int na = c + 13;
		int border = isupper(c) ? 'Z' : 'z';
		if (na > border)
		{
			na -= 26;
		}

		c = na;
	}

	cout << s;
}

