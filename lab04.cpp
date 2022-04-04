#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	unsigned char a;
	cout << "Введите символ = ";	cin >> a; cout << endl;
	if (a >= '0' && a <= '9')
		printf("Это цифра %c! Код ASCII = %x",  a, a);
	else if (a >= 'A' && a <= 'z')
		printf("Это латинская буква %c! Код ASCII = %x", a, a);
	else if (a >= 0xC0 && a <= 0xFF)
		printf("Это русская буква %c! Код ASCII = %x", a, a);
	else
		printf("Это ни буква и не цифра! Код ASCII = %x", a);

	return 0;
}