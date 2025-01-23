#include <iostream>
#include <string>

using namespace std;
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct Node
{
	Node(int data = 0) 
		: data(data)
		, next(nullptr)
		, prev(nullptr)
	{}

	int data;
	Node* next;
	Node* prev;
};

int main()
{
	FAST_IO;

	int n;
	cin >> n;

	Node* head = new Node();
	Node* tail = new Node();
	head->next = tail;
	tail->prev = head;
	int size = 0;

	while (n--)
	{
		string command;
		cin >> command;

		if (command == "push")
		{
			int num;
			cin >> num;

			Node* newNode = new Node(num);
			Node* prevNode = tail->prev;

			prevNode->next = newNode;
			newNode->prev = prevNode;

			newNode->next = tail;
			tail->prev = newNode;

			size++;
		}
		else if (command == "pop")
		{
			if (size == 0)
			{
				cout << -1 << '\n';
			}
			else
			{
				Node* node = head->next;
				Node* prevNode = node->prev;
				Node* nextNode = node->next;

				prevNode->next = nextNode;
				nextNode->prev = prevNode;

				cout << node->data << '\n';

				delete node;
				size--;
			}
		}
		else if (command == "size")
		{
			cout << size << '\n';
		}
		else if (command == "empty")
		{
			cout << (size == 0) << '\n';
		}
		else if (command == "front")
		{
			if (size == 0)
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << head->next->data << '\n';
			}
		}
		else if (command == "back")
		{
			if (size == 0)
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << tail->prev->data << '\n';
			}
		}
	}
}
