
#include <iostream>
#include <stdio.h>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int arr[3];
	int minor;
	srand((unsigned int)time(NULL));
	cout << "Generated 3 numbers: " << endl;
	for (int i = 0; i < 3; i++) {
		arr[i] = rand() % 60 - 50;
		cout << arr[i] << endl;
	}
//-8 3 -1
	minor = arr[0];
	for (int i = 1; i < 3; i++) {
		if (arr[i] <= minor) {
			minor = arr[i];
		}
	}
	cout << "The minor is: ";
	cout << minor;
}