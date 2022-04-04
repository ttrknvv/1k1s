#include <iostream>

using namespace std;

int main() {
	int size;
	cout << "Lenght of massiv = "; cin >> size;
	float* pArr = new float[size];
	float Summ = 0, Summ2 = 0; 
	int promezh1 = 0, promezh2 = 0;
	cout << "Put the number of massiv: ";
	for (int i = 0; i < size; i++) {
		cin >> pArr[i];
	}
	for (int i = 0; i < size; i++) {
		if ((i + 1) % 2 != 0) {
			Summ += *(pArr + i);
		}
	}
	for (int i = 0; i < size; i++) {
		if (*(pArr + i) < 0) {
			promezh1 = i; break;
		}
	}
	for (int i = size -1; i != 0; i--) {
		if (*(pArr + i) < 0) {
			promezh2 = i; break;
		}
	}
	for (; promezh1 < promezh2; promezh1++) {
		Summ2 += *(pArr + promezh1 + 1);
		if (promezh2 == promezh1 + 2) {
			break;
		}
	}
	cout << pArr[3];
	delete[] pArr;
	cout << endl << "The Summ = " << Summ;
	cout << endl << "The Summ2 = " << Summ2;
	cout << endl << "The Summ + Summ2 = " << Summ + Summ2;
	return 0;
}