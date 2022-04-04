#include <iostream>
#include "sum.h"
#include "ruz.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int n, a, b;
	cout << "1 - Сумма; 2 - Разность" << endl << "Выбери = "; cin >> n;
	if (n == 1) {
		cout << "(a + b)" << endl << "a = "; cin >> a; cout << "b = "; cin >> b;
		cout << sum(a, b);
	}
	else if (n == 2) {
		cout << "(a - b)" << endl << "a = "; cin >> a; cout << "b = "; cin >> b;
		cout << ruz(a, b);
	}
}