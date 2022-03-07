//program searching node in single linked list in C++
#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int key;
	Node* next;
};

//insert a new node on the linked list
void push(Node** head_ref, int new_key)
{
	Node* new_node = new Node();
	new_node->key = new_key;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

//checks whether the value x is present in linked list
bool search(Node* head, int x)
{
	Node* current = head; 
	while (current != NULL)
	{
		if (current->key == x)
			return true;
		current = current->next;
	}
	return false;
}

int main()
{

	Node* head = NULL;
	int x = 17;

	push(&head, 2);
	push(&head, 7);
	push(&head, 19);
	push(&head, 17);
	push(&head, 25);

	cout << "Apakah 17 ada di linked list? " << endl;
	search(head, 17)? cout<<"Ya" : cout<<"Tidak";
	
	return 0;
}
