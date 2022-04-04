#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE,"Russian");
	int X[99], n, k, kolich = 0;
	int *pX = X;
	cout << "Размер массива =\t"; cin >> n;
	cout << "Введите элементы массива = ";
	for (; pX < (X + n); pX++) {
		cin >> *pX;
	}
	for (int i = 0; i < n; i++) {
		for (k = 0; k < n; k++)
			if (*(X + i) == *(X + k) && i != k)
				break;
		if (k == n)
			kolich++;
	}
	cout << kolich;
	return 0;
}