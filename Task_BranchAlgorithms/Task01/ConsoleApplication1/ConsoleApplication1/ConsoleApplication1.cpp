

#include <iostream>
#include <stdio.h>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int arr[3];
	int positives = 0;
	srand((unsigned int)time(NULL));
	cout << "Generated 3 numbers: " << endl;
	for (int i = 0; i < 3; i++) {
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << endl;
		if (arr[i] > 0) {
			positives++;
		}
	}
    cout << "Number of positives numbers: ";
	cout << positives;
}


