#include <iostream>
using namespace std;


struct TNode {
	int d;
	TNode * next;
};


void create(TNode** begin, TNode** end, int d) {

	*begin = new TNode;

	(*begin)->d = d;
	(*begin)->next = NULL;
	*end = *begin;

}

void add(TNode** end, int d) {

	TNode *newnode = new TNode;

	newnode->d = d;
	newnode->next = NULL;
	(*end)->next = newnode;
	*end = newnode;

}

void del(TNode** begin, TNode** end, int key) {

	TNode* curNode = *begin;
	TNode *prevNode;
	
	do {
		prevNode = curNode;
		curNode = curNode->next;
	} while (curNode && curNode->d != key);


	if (key == (*begin)->d) {

		*begin = (*begin)->next;

	}

	else if (key == (*end)->d) {
		*end = prevNode;
		(*end)->next = NULL;
	}

	else {
		prevNode->next = curNode->next;
	}


	delete curNode;


}

void display(TNode** begin) {

	TNode* list = *begin;
	do {
		cout << list->d << endl;
		list = list->next;
	} while (list);

	delete list;
}

//TNode* find(TNode** begin, int key) {
//
//	TNode* list = *begin;
//	TNode* find;
//	do {
//		if (list->d == key) {
//			cout << list->d << endl;
//			return list;
//		}
//		list = list->next;
//	} while (list);
//
//	delete list;
//
//}

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
