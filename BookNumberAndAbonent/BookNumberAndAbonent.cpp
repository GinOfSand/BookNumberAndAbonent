#include <iostream>
#include<Windows.h>
#include"NumberBook.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	NumberBook a(10);
	a.seeBook();
	a.seeBook();
	a.setAbonent();
	int cheker = 0;
	do {
		cout << "Введите величину добавления к книге\n";
		int c = 0;
		cin >> c;
		a.setBook(c);
		cout << "Для завершения нажмите 0 : ";
	} while (cheker != 0);
	cin.clear();
	a.seeBook();
	a.deletAbonent();
	a.seeBook();

}

