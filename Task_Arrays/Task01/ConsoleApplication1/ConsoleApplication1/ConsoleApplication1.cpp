
#include <iostream>
#include <vector>
using namespace std;

/*В данном массиве поменять местами элементы, стоящие на нечетных местах, с
элементами, стоящими на четных местах.*/

bool isEven(int num) {
	if (num % 2 == 0)
		return true;
	else
		return false;
}

vector<int> get_even_pos(int vec[], int size) {
	vector<int> pos_vec;

	for (int i = 0; i <= size - 1; i++)
	{
		if (isEven(i))
		{
			pos_vec.push_back(vec[i]);
		}
	}

	return pos_vec;
}

vector<int> get_odd_pos(int vec[], int size) {
	vector<int> odd_vec;

	for (int i = 0; i <= size - 1; i++)
	{
		if (!isEven(i))
		{
			odd_vec.push_back(vec[i]);
		}
	}

	return odd_vec;
}

int get_two_vectors_size(vector<int> vec1, vector<int> vec2) {
	
	return vec1.size() + vec2.size();
}

int* swap_array(vector<int> odd_array, vector<int> even_array, int size_of_two) {
	
	int *swapped_array = new int[size_of_two];

	for (int i = 0; i <= size_of_two - 1; i++) {
		if (isEven(i)) {
			if (!odd_array.empty()) {
				swapped_array[i] = odd_array[0];
				odd_array.erase(odd_array.begin());
			}
		}
		else {
			if (!even_array.empty()) {
				swapped_array[i] = even_array[0];
				even_array.erase(even_array.begin());
			}
		}
	}

	return swapped_array;
}

int main()
{
	int myarray[4] = { 7, 9, 11, 8 };
	int myarray_length = sizeof(myarray) / sizeof(myarray[0]);
	bool is_even_len;
	vector<int> even_array;
	vector<int> odd_array;

	even_array = get_even_pos(myarray, myarray_length);
	odd_array = get_odd_pos(myarray, myarray_length);

	const unsigned int size_of_two = get_two_vectors_size(even_array, odd_array);
	int *swapped_array = new int[size_of_two];
	swapped_array = swap_array(odd_array, even_array, size_of_two);
	int swapped_array_size = sizeof(swapped_array) / sizeof(swapped_array[0]);
	
	for (int i = 0; i <= size_of_two - 1; i++) {
		cout << swapped_array[i] << endl;
	}
}



