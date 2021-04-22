#include<iostream>
#include<climits>
using namespace std;
class node
{
  public:
	int data;
	node *next;
	  node(int d)
	{
		data = d;
		next = nullptr;
	}

};
void insert(node * &head, int key)
{
	if (head == nullptr)
		head = new node(key);


	node *n = new node(key);
	n->next = head;
	head = n;
}

void deleteLargest(node * start)
{

	node *curr = nullptr;		// for storing the position of largest element
	node *prev = nullptr;		// for storing postion of node before the current node
	node *prev1 = nullptr;		// for storing positon of the node before the largest element node
	int max = INT_MIN;
	int cnt = 0;
	
	while (start->next != nullptr)
	{
		if (start->data > max)
		{   
		    
			max = start->data;
			curr = start;
			cnt++;
		}

//  for maintaining the  positon of the node before the largest element node
		if (cnt == 1)
		{
			prev1 = prev;
			cnt = 0;
		}
		prev = start;
		start = start->next;
	}
	// checking whether the largest element is at the tail node
	if (curr->next == nullptr)
	{
		prev1->next = nullptr;
		delete curr;
	}
	else
	{
		prev1->next = curr->next;
		delete curr;
	}
}


void print(node * head)
{
	while (head->next != nullptr)
	{
		cout << head->data << "->";
		head = head->next;
	}
}

int main()
{
	node *head = nullptr;
	int k, r;
	cout << "enter the no of elements you want to enter in the linked list" << endl;
	cin >> r;

	for (int i = 1; i <= r; i++)
	{
		cout << "enter data" << endl;
		cin >> k;
		insert(head, k);
	}
	deleteLargest(head);
	print(head);
}
