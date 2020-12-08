
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int stop = 4;
	double step = 0.2;
	double x = -4.0;
	double func;
	
	while (x <= stop) {
		func = cos(2 * x);
		cout << func << endl;
		x = x + step;
	}
}
