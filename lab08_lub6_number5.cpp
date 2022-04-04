#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cctype>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char a, b; 
	int c, d, g;
vvod:
	cout << "Введите цифру либо строчную букву(English or Russian) = "; 
	cin >> a;
	if (a >= '0' && a <= '9') {
		g = a;
		printf("Это цифра! Код цифры в Windows-1251 = %x", g);
	}
	else if (a >= 'a' && a <= 'z')
	{
		b = towupper(int(a));
		c = int(a) - int(b);
		printf("Это английская буква! Разница заглавной английской и маленькой английской = %x", c);
	}
	else if (a >= 'а' && a <= 'я')
	{
		b = int(a) - 32;
		c = int(a) - int(b);
		printf("Это русская буква! Разница заглавной русской и маленькой русской = %x", c);
	}
	else {
		goto vvod;
	}
	return 0;
}