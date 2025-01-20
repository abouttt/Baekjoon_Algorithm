#include <iostream>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int stack[1000001];
int top = -1;

void Push(int x)
{
	stack[++top] = x;
}

int Pop()
{
	if (top == -1)
	{
		return -1;
	}

	return stack[top--];
}

int Size()
{
	return top + 1;
}

int Empty()
{
	return top == -1;
}

int Top()
{
	if (top == -1)
	{
		return -1;
	}

	return stack[top];
}

int main()
{
	FAST_IO;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int command;
		cin >> command;

		switch (command)
		{
		case 1:
			int x;
			cin >> x;
			Push(x);
			break;
		case 2:
			cout << Pop() << '\n';
			break;
		case 3:
			cout << Size() << '\n';
			break;
		case 4:
			cout << Empty() << '\n';
			break;
		case 5:
			cout << Top() << '\n';
			break;
		}
	}
}
