
#include <iostream>
using namespace std;

//Найти последний элемент


int main()
{
	int my_array[11] = { 14, 8, 14, 5, 4 , 100, 24, 14, 14, 111, 14};
	int search = 14;

	int i = 0;
	int position = 0;

	while (i < sizeof(my_array) / sizeof(my_array[0])) {
		if (search == my_array[i]) {
			position = i;

		}
		i++;
		if (i == sizeof(my_array) / sizeof(my_array[0])) {
			cout << "Last search position in array is: " << position << endl;
		}
	}


}

