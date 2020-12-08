
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


/*1. Сформировать переменную структурированного типа, в которой расположены данные
о каждом отдельном ученике в следующем порядке: имя (15 символов), фамилия (15
символов), год обучения (целое число), буква (символ). Требуется перенести эти
данные в другую переменную выводя первую букву имени и фамилию ученика:
И. Петров
П. Иванов
и т. д.*/

/*2. Переменная содержит сведения об учениках некоторой школы (см. задачу 1).
а) Собрать в сведения об учениках девятых классов школы,
б) Выяснить, на сколько человек в восьмых классах больше, чем в девятых.*/

struct Student {
	char name[15];
	char surname[15];
	int year;
	char letter;
};


char* new_name(Student old_name) {
	
	char *new_name = new char[18]{ old_name.name[0], '.', ' ' };
	for (int i = 0; i < sizeof(old_name.surname); i++) {
		new_name[i + 3] += old_name.surname[i];
	}
	
	
	return new_name;
}

void show_data(Student * students, int year) {

	for (int i = 0; i < sizeof(students); i++) {
		if (students[i].year == year) {
			cout << students[i].name << endl;
			cout << students[i].surname << endl;
			cout << students[i].year << endl;
			cout << students[i].letter << endl;
			cout << endl;
			cout << endl;
		}
		}
}

int count_students(Student* students, int size, int year) {
	int students_count = 0;
	for (int i = 0; i < size; i++) {
		if (students[i].year == year) {
			students_count++;
		}
	}
	return students_count;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	Student petrov { "Иван", "Петров", 2, 'А' };
	Student ivanov{ "Петр", "Иванов", 3, 'Б' };
	Student student1{ "Петр", "Петров", 8, 'А' };
	Student student2{ "Иван", "Иванов", 9, 'Б' };
	Student student3{ "Антон", "Антонов", 8, 'Б' };
	Student student4{ "Максим", "Максим", 9, 'Б' };
	Student student5{ "Николай", "Николаев", 8, 'В' };
	char *petrov_1 = { new_name(petrov) };
	char *ivanov_1 = { new_name(ivanov) };
	//cout << petrov_1 << endl;
	//cout << ivanov_1 << endl;

	// Список студентов
	Student students[5] = { student1, student2, student3, student4, student5 };

	// Данные о студентах 8-го класса
	show_data(students, 8);

	//Подсчитаем кол-во студентов 8 класса
	int students_count_8 = count_students(students, 5, 8);
	int students_count_9 = count_students(students, 5, 9);

	cout << "В 8 классе больше человек чем в 9 на: " << endl;
	cout << students_count_8 - students_count_9 << endl;





    
}
