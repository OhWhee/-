

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double sum = 0;
	double k = 1;

	do{
		sum = sum + 1.0 / pow(k, 5);
		k++;
		
	} while (k <= 5);
	cout << sum << endl;
}
