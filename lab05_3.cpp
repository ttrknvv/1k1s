#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	cout << "Позвонил 1)Вася или 2)Петя?   ";
	cin >> a;
	switch (a) {
	case 1: cout << "  Вася зовет в футбол"; break;
	case 2: cout << "  Петя зовет в клуб"; break;
	default: cout << "Неправильное число!";
	}
	return 0;
}