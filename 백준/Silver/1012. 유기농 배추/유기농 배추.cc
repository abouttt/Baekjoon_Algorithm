#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;
using ll = long long;
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };

int n, m, k;
int a[51][51];
bool visited[51][51];

void dfs(int y, int x)
{
	visited[y][x] = true;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= n || nx >= m)
		{
			continue;
		}

		if (a[ny][nx] == 0)
		{
			continue;
		}

		if (visited[ny][nx])
		{
			continue;
		}

		dfs(ny, nx);
	}
}

int main()
{
	FAST_IO;

	int t;
	cin >> t;

	while (t--)
	{
		cin >> n >> m >> k;

		for (int i = 0; i < k; i++)
		{
			int y, x;
			cin >> y >> x;
			a[y][x] = 1;
		}

		int cnt = 0;
		for (int y = 0; y < n; y++)
		{
			for (int x = 0; x < m; x++)
			{
				if (a[y][x] == 0)
				{
					continue;
				}

				if (visited[y][x])
				{
					continue;
				}

				dfs(y, x);
				cnt++;
			}
		}

		cout << cnt << '\n';

		memset(a, 0, sizeof(a));
		memset(visited, 0, sizeof(visited));
	}
}
