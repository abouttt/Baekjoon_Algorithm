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
	cin >> s;

	string rs(s);
	reverse(s.begin(), s.end());

	cout << (s == rs);
}
