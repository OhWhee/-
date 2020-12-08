
#include <iostream>
using namespace std;

//Найти первый элемент. Бинарный поиск.


int main()
{
	int my_array[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int search = 5;

	int i = 0;
	int l = 1;
	int r = sizeof(my_array) / sizeof(my_array[0]) - 1;
	int m;

	while (l < r) {
		
		m = (l + r) / 2;
		if (search == my_array[m]) {
			cout << "Position in array is: " << m << endl;
			break;
		}
		else
			r = m;
	}


}

