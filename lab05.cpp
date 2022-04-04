#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;

//x - a
//y - и
//z - 6
int main() 
{
	SetConsoleOutputCP(1251);  
	SetConsoleCP(1251);
	char x = 'a', X = 'A', y = 'и', Y = 'И', z = '6';
	int R1, R2;
	cout << "1 ЗАДАНИЕ) X строчная = " << x << " X заглавная = " << X << endl;
	R1 = int(x) - int(X);
	printf("%x\n", R1);
	cout << "2 ЗАДАНИЕ) y строчная = " << y << " Y заглавная = " << Y << endl;
	R2 = int(y) - int(Y);
	printf("%x\n", R2);
	cout << "z = " << z << endl;
	printf("Код цифры z = %x", z);
	return 0;
}		
