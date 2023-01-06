#include<iostream>
#include<cmath>
#include<conio.h>
#include<windows.h>
//#include<clocale>
using namespace std;

bool theExit = false;

// ���������� ���������
struct Sotrudnik {
	char surname[60], name[60], patronymic[60], position[60];
	int year;
	int salary;
};


//���������� �������

// ����� ������� ��������
void Show(const Sotrudnik obj[], int numberOfSotrudniks);
// ���������� ���c��� �� ������ ����� ���������
void Sort(Sotrudnik* sortArray, int n);

// ��������� ������� MAIN
int main() {
	SetConsoleCP(1251); // ���� � ������� � ��������� 1251
	SetConsoleOutputCP(1251); // ����� �� ������� � ��������� 1251. 
	setlocale(LC_ALL, "rus");

	const int numberOfSotrudniks = 2;
	Sotrudnik array[numberOfSotrudniks] = {}; //  ������ ���������� ��� ���� ���������
	Sotrudnik sortArray[numberOfSotrudniks] = {};// ������ ���������� ������ ���� ��������� ��� ����������

	while (!theExit) {
		// ����
		cout << "������� ����� 1-8" << endl;
		cout << "1 - ���� ������� ��������" << endl;
		cout << "2 - ����� ������� ��������" << endl;
		cout << "3 - ���������� ������� ��������" << endl;
		cout << "4 - ����� � ������� �������� �� ��������� ���������" << endl;
		cout << "5 - ��������� �������� ���������" << endl;
		cout << "6 - �������� ��������� �� �������" << endl;
		cout << "7 - ����� �� ����� ������� ��������" << endl;
		cout << "8 - �����" << endl;
		switch (_getch())
		{
		case '1':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "���� ������� ��������: " << endl;
			cout << endl;
			for (int i = 0; i < numberOfSotrudniks; i++) {
				cout << "������� ������ "<< i+1 << " ����������:" << endl;
				cout << endl;

				cout << "�������: " << endl;
				cin.getline(array[i].surname, 60);

				cout << "���: " << endl;
				cin.getline(array[i].name, 60);

				cout << "���������: " << endl;
				cin.getline(array[i].patronymic, 60);

				cout << "���������: " << endl;
				cin.getline(array[i].position, 60);

				cout << "��� ��������: " << endl;
				cin >> array[i].year;

				cout << "���������� �����: " << endl;
				cin >> array[i].salary;

				cin.get();
			}
			cout << endl;
			cout << "__________________________________________________" << endl;
			break;
		case '2':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "����� ������� ��������: " << endl;
			cout << endl;
			Show(array, numberOfSotrudniks);
			cout << "__________________________________________________" << endl;
			break;
		case '3':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "���������� ������� ��������: " << endl;
			cout << endl;
			Sort(sortArray, numberOfSotrudniks);
			cout << "__________________________________________________" << endl;
			break;
		case '4':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "����� � ������� �������� �� ��������� ���������: " << endl;
			cout << endl;

			cout << "__________________________________________________" << endl;
			break;
		case '5':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "��������� �������� ���������: " << endl;
			cout << endl;

			cout << "__________________________________________________" << endl;
			break;
		case '6':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "�������� ��������� �� �������: " << endl;
			cout << endl;

			cout << "__________________________________________________" << endl;
			break;
		case '7':
			cout << endl;
			cout << "__________________________________________________" << endl;
			cout << "����� �� ����� ������� ��������: " << endl;
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


// �������� ������ ���� �������

// ����� ������� ��������
void Show(const Sotrudnik obj[], int numberOfSotrudniks) {
	for (int i = 0; i < numberOfSotrudniks; i++) {
		cout << "��������� �����: " << i+1 << endl;
		cout << "������� - " << obj[i].surname << ", ��� - " << obj[i].name << ", �������� - " << obj[i].patronymic << ", ��������� - " << obj[i].position << ", ��� �������� - " << obj[i].year << ", ���������� ����� - " << obj[i].salary << endl;
		cout << endl;
	}
}

//  ���������� ���c��� �� ������ ����� ���������
void Sort(Sotrudnik* sortArray, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (sortArray[j].surname > sortArray[j+1].surname) {
				swap(sortArray[j], sortArray[j+1]);
			}
		}
	}
	//����� �� �������
	for (int i = 0; i < n; i++) {
		cout << "��������� �����: " << i + 1 << endl;
		cout << "������� - " << sortArray[i].surname << ", ��� - " << sortArray[i].name << ", �������� - " << sortArray[i].patronymic << ", ��������� - " << sortArray[i].position << ", ��� �������� - " << sortArray[i].year << ", ���������� ����� - " << sortArray[i].salary << endl;
		cout << endl;
	}
}