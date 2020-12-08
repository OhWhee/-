
#include <iostream>
using namespace std;

//Найти первый элемент


int main()
{
	int my_array[5] = { 7, 8, 11, 5, 4 };
	int search = 14;

	int i = 0;

	while (i < sizeof(my_array) / sizeof(my_array[0]) ) {
		if (search == my_array[i]) {
			cout << "FOUND!" << endl;
			break;
		}
		i++;
		if (i == sizeof(my_array) / sizeof(my_array[0])) {
			cout << "Not FOUND!" << endl;
		}
	}

	
}

