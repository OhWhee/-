#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	ifstream inf("input.txt", ios::in|ios::_Nocreate);
	if (!inf) {
		cout << "Невозможно открыть файл для чтения!";
		return 1;
	}

	char filename[81];
	cout << "Введите название файла: ";
	cin >> filename;

	ifstream inputfile(filename, ios::in | ios::_Nocreate);
	if (!inputfile) {
		cout << "Ошибка открытия файла!!";
		return 1;
	}
	char buf[81];
	ofstream outputfile;

	outputfile.open("output.txt");
	if (!outputfile) {
		cout << "Невозможно открыть файл для записи!";
		return 1;
	}

	while (!inputfile.eof()) {
		inputfile.getline(buf, 81);
		cout << buf << endl;
		outputfile << buf << endl;

	}
	outputfile.close();


	

}

