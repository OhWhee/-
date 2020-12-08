#include <iostream>
using namespace std;

struct MyData
{
	char symbol;
	MyData *p;
};

void createStack(struct MyData *head, char symbol) {

	head->symbol = symbol;
	head->p = NULL;
}


void push(struct MyData **head, char symbol) {

	MyData *newNode = new MyData;
	newNode->symbol = symbol;
	newNode->p = *head;
	*head = newNode;
	
}

void pop(struct MyData** head) {

	MyData previous = **head;


}


void display(struct MyData *head) {
	MyData *list = head;
	while (list) {
		cout << list->symbol << " ";
		list = list->p;
	}
	cout << endl;
	cout << endl;
}

int main()
{	
	MyData* head = new MyData;
	createStack(head, 'a');

	push(&head, 'b');
	push(&head, 'c');
	pop(&head);

	//display(head);
}
