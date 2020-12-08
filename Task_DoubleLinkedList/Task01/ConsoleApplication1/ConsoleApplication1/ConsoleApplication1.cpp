
#include <iostream>
using namespace std;


struct TNode {
	int d;
	TNode* next;
	TNode* prev;
};


void create(TNode** begin, TNode** end, int d) {

	*begin = new TNode;
	(*begin)->d = d;
	(*begin)->next = NULL;
	(*begin)->prev = NULL;
	*end = *begin;

}


void add(TNode** end, int d) {

	TNode *newnode = new TNode;
	newnode->d = d;
	newnode->next = NULL;
	newnode->prev = *end;
	(*end)->next = newnode;
	*end = newnode;

}

void del(TNode** begin, TNode** end, int key) {

	TNode* curNode = *begin;
	TNode* prevNode;

	while (curNode && curNode->d != key) {
		prevNode = curNode;
		curNode = curNode->next;
	}

	if (key == (*begin)->d) {

		*begin = (*begin)->next;
		(*begin)->prev = NULL;

	}

	else if (key == (*end)->d) {

		*end = (*end)->prev;
		(*end)->next = NULL;

	}

	else {

		(curNode->prev)->next = curNode->next;
		(curNode->next)->prev = curNode->prev;

	}

	delete curNode;


}

void display(TNode** begin) {

	TNode* list = *begin;
	while(list){
		cout << list->d << endl;
		list = list->next;
	}
}



int main()
{
	TNode* begin = new TNode;
	TNode* end = new TNode;

	create(&begin, &end, 1);
	add(&end, 2);
	add(&end, 3);

	display(&begin);

	del(&begin, &end, 3);

	display(&begin);
 
}
