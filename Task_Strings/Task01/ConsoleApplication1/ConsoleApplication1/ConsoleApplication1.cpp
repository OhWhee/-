
#include <iostream>
#include <string>
using namespace std;

/* Для заданной строки посчитать количество слов, начинающихся с гласной. */


int count_words(char *text, int size) {

	int word_count = 0;
	int stop = 1;
	char vowels[20] = { 'а', 'у', 'о', 'ы', 'и', 'э', 'я', 'ю', 'ё', 'е', 'А', 'У', 'О', 'Ы', 'И', 'Э', 'Я', 'Ю', 'Ё', 'Е' };
	char first_letter;
	int first_letter_index = 0;

	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] != ' ' && stop == 1) {
			first_letter = text[first_letter_index];
			for (int i = 0; i < sizeof(vowels); i++) {
				if (first_letter == vowels[i]){
					word_count++;
				}
			}
			stop = 0;
		}
		else
		{
			if (text[i] == ' ') stop = 1;
			first_letter_index = i + 1;
		}
	}

	return word_count;
}


int main()
{	
	setlocale(LC_CTYPE, "Russian");
	char my_string[255] = R"(Для любого из заданий написать программу на алгоритмическом языке изначально
		составив блок - схему и псевдокод. Продумать декомпозицию каждой решаемой задачи на
		подзадачи. Каждую подзадачу реализовать в отдельной функции.)";
	//char my_string[255] = R"(Раз два один)";
	int word_count = count_words(my_string, sizeof(my_string));


    cout << word_count << endl;
}

