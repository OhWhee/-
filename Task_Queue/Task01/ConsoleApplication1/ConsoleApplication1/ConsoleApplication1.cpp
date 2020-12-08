#include <iostream>
using namespace std;



struct TNode {
	int d;
	TNode * next;
};



void Create(TNode** begin, TNode** end, int d) {

	*begin = new TNode;
	(*begin)->d = d;
	(*begin)->next = NULL;
	*end = *begin;

	cout << "The queue is created with new element: " << (*begin)->d << endl;
}

void Add(TNode** end, int d) {
	
	TNode* newnode = new TNode;

	newnode->d = d;
	newnode->next = NULL;
	(*end)->next = newnode;
	*end = newnode;

	cout << newnode->d << " new element!"<< endl;
}

int Del(TNode** begin) {

	int temp_data = (*begin)->d;
	
	TNode* newpointer = *begin;
	*begin = (*begin)->next;

	delete newpointer;

	cout << temp_data << " is out!" << endl;
	cout << (*begin)->d << " is the next element!" << endl;


	return temp_data;
}


void Display(TNode** begin) {

	TNode* list = *begin;
	while (list->next) {
		cout << list->d << endl;
		list = list->next;
	}

	delete list;

}


int main()
{
	TNode* begin = new TNode;
	TNode* end = new TNode;

	Create(&begin, &end, 1);
	Add(&end, 2);
	Add(&end, 3);
	Add(&end, 4);
	Add(&end, 5);
	Add(&end, 6);
	Display(&begin);
	Del(&begin);
}

