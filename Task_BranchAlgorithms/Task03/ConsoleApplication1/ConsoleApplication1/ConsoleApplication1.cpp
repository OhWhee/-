#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;

/*22. Компьютер запрашивает стоимость одного литра бензина, сумму денег и кол-во
бензина, которые необходимо залить в бак. Если денег достаточно и сдачи не требуется,
вывести на экран «Спасибо. Машина заправлена». Если денег внесено больше, то вывести
на экран «Возьмите сдачу» и сумму сдачи. Если денег мало, то вывести на экран «Не
хватает» и указать размер недостающей суммы и на сколько литров бензина хватает денег.*/

int main()
{
	stringstream ss;
	double price_per_liter = 45.09;
	string cash;
	string fuel_amount;
	double epsilon = 0.001f;



	cout << "Fuel price is: " << endl;
	cout << price_per_liter << endl;
	cout << "Enter the amount of cash: " << endl;
	cin >> cash;
	//atof(cash.c_str());
	cout << "Enter the amount of liters: " << endl;
	cin >> fuel_amount;
	
	if (atof(cash.c_str()) <= 0) {
		cout << "Not enough cash/n";
	}
	if (atof(fuel_amount.c_str()) == 0 && atof(cash.c_str()) > 0) {
		cout << "Thanks for free money";
	}
	if ((atof(fuel_amount.c_str()) * atof(cash.c_str())) < price_per_liter) {
		cout << "Not enough cash for 1 liter" << endl;
		cout << "Difference between price and amount of cash:" << endl;
		cout << price_per_liter - (atof(fuel_amount.c_str()) * atof(cash.c_str())) << endl;
		cout << "You can afford only: " << endl;
		cout << atof(cash.c_str()) / price_per_liter << endl;
	}
	if (fabs(      atof(      fuel_amount.c_str()   ) * price_per_liter - atof(      cash.c_str()    )     ) < epsilon) {
		cout << "Thank you. The car is filled." << endl;
	}

	if (atof(fuel_amount.c_str()) * price_per_liter < atof(cash.c_str())) {

		cout << "Take the change:" << endl;
		cout << atof(cash.c_str()) - atof(fuel_amount.c_str()) * price_per_liter << endl;

	}



}
