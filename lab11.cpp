#include <iostream> 
#include <windows.h>

using namespace std;

void main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int A, B, C; char tmp[33]; int mask_A = 96, mask_B = ~mask_A;
	cin >> A; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A = " << tmp << endl;
	_itoa_s(mask_A, tmp, 2);	// mask A
	cout << "Mask A = " << tmp << endl;
	A &= mask_A;			// исключение
	cout << "Исключенные биты от А = ";
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B = " << tmp << endl;
	_itoa_s(mask_B, tmp, 2);
	cout << "Mask b = " << tmp << endl;
	B &= mask_B;							// очистил биты B
	B |= A;									// добавил биты от A
	_itoa_s(B, tmp, 2);
	cout << "Переставленное B = " << tmp;
}


