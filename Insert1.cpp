//program insert node in single linked list in C++
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data, key;
	Node* next;
};

//insert a new node on the front of the list
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//insert a new node after the given prev_node
void insertAfter(Node* prev_node, int new_data)
{

    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
 
    Node* new_node = new Node();
    new_node->data = new_data;
    // next of prev_node
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

//insert a new node on the end 
void append(Node** head_ref, int new_data) 
{ 
    Node* new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data; 
    new_node->next = NULL; 
    
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 
    
    while (last->next != NULL)
    {
        last = last->next; 
    }
   
    last->next = new_node; 
    return; 
} 

//the function prints content of linked list
void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 3; 
	head->next = second; 

	second->data = 7; 
	second->next = third;

	third->data = 6; 
	third->next = NULL;

	cout << "--- Created linked list --- " << endl;
	printList(head);
	
	cout << "\n\nInsert data" << endl ;
	push(&head, 1); 
		printList(head); cout<<endl;
	
	insertAfter(head->next, 4); 
		printList(head); cout<<endl;
	
	append(&head, 9); 
		printList(head); cout<<endl;
	
	cout << "\n-- Updated linked list : " << endl ;
	printList(head);
	
	return 0;
}
