#include <iostream>
using namespace std;


int main()
{
	float mul = 1.0;
	float i = 1;
	float fraction;
	float denominator = 2;
	for (i; i <= 99; i+=2) {
		fraction = (i / denominator);
		mul *= fraction;
		denominator += 2;
	}

	cout << mul << endl;
    
}

