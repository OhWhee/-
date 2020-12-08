
#include <iostream>
using namespace std;


int main()
{
    
	char my_array[10] = { 's', 'a', 'w', 'z', 'x', 't', 'a', 'q', 'k', 'c' };
	char x, j;

	for (int i = 0; i < sizeof(my_array) / sizeof(my_array[0]); i++) {

		x = my_array[i];
		j = i - 1;
		while ((x < my_array[j]) && (j >= 0)) {
			my_array[j + 1] = my_array[j];
			j = j - 1;
		}
		my_array[j + 1] = x;
	}

	for (int i = 0; i < sizeof(my_array) / sizeof(my_array[0]); i++) {
		
		cout << my_array[i] << endl;
	}

}

