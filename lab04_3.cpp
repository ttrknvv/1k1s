#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a;
	cout << "Введите номер дня недели(от 1 до 7) = "; cin >> a;
	if (a == 1)
		cout << "это Понедельник";
	else if (a == 2)
		cout << "это Вторник";
	else if (a == 3)
		cout << "это Среда";
	else if (a == 4)
		cout << "это Четверг";
	else if (a == 5)
		cout << "это Пятница";
	else if (a == 6)
		cout << "это Суббота";
	else if (a == 7)
		cout << "это Воскресенье";
	return 0;
}
