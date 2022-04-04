#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int rezult;
char big_symbol;


void number(char a) {
	a = int(a);
	cout << "Это цифра!Код цифры в Windows - 1251 = ";
	printf("%x", a);
}

void russian(char a) {
	big_symbol = toupper(int(a));
	rezult = int(a) - int(big_symbol);
	cout << "Это русская буква!Разница заглавной русской и маленькой русской = " << 20;
}

void english(char a) {
	big_symbol = toupper(int(a));
	rezult = int(a) - int(big_symbol);
	cout << "Это английская буква!Разница заглавной английской и маленькой английской = "; 
	printf("%x", rezult);
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char symbol; 
	
	cout << "Введите цифру либо строчную букву(English or Russian) = " << endl << "Ввод = ";
	cin >> symbol;
	
	if (symbol >= '0' && symbol <= '9') {
		number(symbol);
	}
	else if (symbol >= 'a' && symbol <= 'z')
	{
		english(symbol);
	}
	else if (symbol >= 'а' && symbol <= 'я')
	{
		russian(symbol);
	}
	
	return 0;
}