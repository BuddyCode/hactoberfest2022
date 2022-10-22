#include <bits/stdc++.h>

using namespace std;

// Node structure
class Node
{
	public:
        int data;
        Node *next;
};

// Function for splitting the linked list
void splitList(Node *head, Node **split_head1, Node **split_head)
{
	Node *slow_ptr = head;
	Node *fast_ptr = head;
	
	if(head == NULL)
		return;
	
	// If there are odd nodes in the circular list then fast_ptr->next becomes head and for even nodes fast_ptr->next->next becomes head
	while(fast_ptr->next != head && fast_ptr->next->next != head)
	{
		fast_ptr = fast_ptr->next->next;
		slow_ptr = slow_ptr->next;
	}
	
	// If there are even elements in list then move fast_ptr
	if(fast_ptr->next->next == head)
		fast_ptr = fast_ptr->next;
		
	// Set the head pointer of first half
	*split_head1 = head;
		
	// Set the head pointer of second half
	if(head->next != head)
		*split_head = slow_ptr->next;
		
	// Make second half circular
	fast_ptr->next = slow_ptr->next;
		
	// Make first half circular
	slow_ptr->next = head;
}

// Common functions to add data to linked list
void push(Node **head_ref, int data)
{
	Node *ptr1 = new Node();
	Node *temp = *head_ref;
	ptr1->data = data;
	ptr1->next = *head_ref;
		
	// If linked list is not NULL then set the next of last node
	if(*head_ref != NULL)
	{
		while(temp->next != *head_ref)
		temp = temp->next;	
		temp->next = ptr1;
	}
    // For the first node
	else
		ptr1->next = ptr1; 
	
	*head_ref = ptr1;
}

// Function to print nodes in a given Circular linked list
void printList(Node *head)
{
	Node *temp = head;
	if(head != NULL)
	{
		cout << endl;
		do {
		cout << temp->data << " ";
		temp = temp->next;
		} while(temp != head);
	}
}

// Main function
int main()
{
	int list_size, i;
		
	// Initialize lists as empty
	Node *head = NULL;
	Node *head1 = NULL;
	Node *head2 = NULL;
	
	// Created linked list will be 55->96->46->28
	push(&head, 55);
	push(&head, 96);
	push(&head, 46);
	push(&head, 28);
	
	cout << "Original Circular Linked List";
	printList(head);	
	
	// Splitting the list
	splitList(head, &head1, &head2);
	
	cout << "\nFirst Circular Linked List";
	printList(head1);
	
	cout << "\nSecond Circular Linked List";
	printList(head2);
	return 0;
}