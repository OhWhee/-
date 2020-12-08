#include <iostream>
#include <vector>
using namespace std;


/*В данном массиве поменять местами элементы, стоящие на нечетных местах, с
элементами, стоящими на четных местах. ДРУГОЙ СПОСОБ*/

int main()
{
    
	int myarray[4] = { 7, 9, 11, 8 };
	int myarray_length = sizeof(myarray) / sizeof(myarray[0]);

	int *swapped_array = new int[myarray_length];
	
	for (int i = 0; i <= myarray_length - 1; i++) {
		if (i % 2 == 0) {
			if (i + 1 <= myarray_length - 1) {
				swapped_array[i + 1] = myarray[i];

			}
		}
		else
			swapped_array[i - 1] = myarray[i];
	}

	for (int i = 0; i <= myarray_length - 1; i++) {
		cout << swapped_array[i] << endl;
	}
}

