#include<iostream>
#include<cmath>
#include<conio.h>
#include<windows.h>
//#include<clocale>
using namespace std;

bool theExit = false;

// ДЕКЛАРАЦИЯ СТРУКТУРЫ
struct Sotrudnik {
	char surname[60], name[60], patronymic[60], position[60];
	int year;
	int salary;
};


//ДЕКЛАРАЦИЯ ФУНКЦИЙ

// вывод массива структур
void Show(const Sotrudnik obj[], int numberOfSotrudniks);
// сортировка масcива из первых полей структуры
void Sort(Sotrudnik* sortArray, int n);

// ОСНОВАНАЯ ФУНКЦИЯ MAIN
int main() {
	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
	SetConsoleOutputCP(1251); // Вывод на консоль в кодировке 1251. 
	setlocale(LC_ALL, "rus");

	const int numberOfSotrudniks = 2;
	Sotrudnik array[numberOfSotrudniks] = {}; //  массив включающий все поля структуры
	Sotrudnik sortArray[numberOfSotrudniks] = {};// массив включающий первые поля структуры для сортировки

	while (!theExit) {
		// меню
		cout << "Введите число 1-8" << endl;
		cout << "1 - Ввод массива структур" << endl;
		cout << "2 - Вывод массива структур" << endl;
		cout << "3 - Сортировка массива структур" << endl;
		cout << "4 - Поиск в массиве структур по заданному параметру" << endl;
		cout << "5 - Изменение заданной структуры" << endl;
		cout << "6 - Удаление структуры из массива" << endl;
		cout << "7 - Вывод на экран массива структур" << endl;
		cout << "8 - Выход" << endl;
		switch (_getch())
		{
		case '1':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "Ввод массива структур: " << endl;
			cout << endl;
			for (int i = 0; i < numberOfSotrudniks; i++) {
				cout << "Введите данные " << i + 1 << " сотрудника:" << endl;
				cout << endl;

				cout << "Фамилия: " << endl;
				cin.getline(array[i].surname, 60);

				cout << "Имя: " << endl;
				cin.getline(array[i].name, 60);

				cout << "Отчествто: " << endl;
				cin.getline(array[i].patronymic, 60);

				cout << "Должность: " << endl;
				cin.getline(array[i].position, 60);

				cout << "Год рождения: " << endl;
				cin >> array[i].year;

				cout << "Заработная плата: " << endl;
				cin >> array[i].salary;

				cin.get();
			}
			cout << endl;
			cout << "__________________________________________________" << endl;
			break;
		case '2':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "Вывод массива структур: " << endl;
			cout << endl;
			Show(array, numberOfSotrudniks);
			cout << "__________________________________________________" << endl;
			break;
		case '3':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "Сортировка массива структур: " << endl;
			cout << endl;
			Sort(sortArray, numberOfSotrudniks);
			cout << "__________________________________________________" << endl;
			break;
		case '4':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "Поиск в массиве структур по заданному параметру: " << endl;
			cout << endl;

			cout << "__________________________________________________" << endl;
			break;
		case '5':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "Изменение заданной структуры: " << endl;
			cout << endl;

			cout << "__________________________________________________" << endl;
			break;
		case '6':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "Удаление структуры из массива: " << endl;
			cout << endl;

			cout << "__________________________________________________" << endl;
			break;
		case '7':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "Вывод на экран массива структур: " << endl;
			cout << endl;

			cout << "__________________________________________________" << endl;
			break;
		case '8':
			theExit = true;
			break;
		}
	}

	return 0;
}


// ОПИСАНИЕ РАБОТЫ ВСЕХ ФУНКЦИЙ

// вывод массива структур
void Show(const Sotrudnik obj[], int numberOfSotrudniks) {
	for (int i = 0; i < numberOfSotrudniks; i++) {
		cout << "Сотрудник номер: " << i + 1 << endl;
		cout << "Фамилия - " << obj[i].surname << ", имя - " << obj[i].name << ", отчество - " << obj[i].patronymic << ", должность - " << obj[i].position << ", год рождения - " << obj[i].year << ", заработная плата - " << obj[i].salary << endl;
		cout << endl;
	}
}

//  сортировка масcива из первых полей структуры
void Sort(Sotrudnik* sortArray, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (sortArray[j].surname > sortArray[j + 1].surname) {
				swap(sortArray[j], sortArray[j + 1]);
			}
		}
	}
	//вывод на консоль
	for (int i = 0; i < n; i++) {
		cout << "Сотрудник номер: " << i + 1 << endl;
		cout << "Фамилия - " << sortArray[i].surname << ", имя - " << sortArray[i].name << ", отчество - " << sortArray[i].patronymic << ", должность - " << sortArray[i].position << ", год рождения - " << sortArray[i].year << ", заработная плата - " << sortArray[i].salary << endl;
		cout << endl;
	}
}
