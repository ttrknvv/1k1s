#include <iostream>

using namespace std;

double* new_massiv(double*, int);

int main() {
	int n = 20;
	const int n_2 = 10;
	double *A = new double[n];
	double B[n_2], Summ = 0;
	cout << "Input massiv = ";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < 10; i++) {
		Summ += pow((*(new_massiv(A, n) + i)), 2);
	}
	cout << "new massiv B[] = ";
	for (int i = 0; i < 10; i++) {
		cout << *(new_massiv(A, n) + i) << " ";
	}
	cout << endl << "Summ of element B[i] ^ 2 = " << Summ;
	delete []A;
	return 0;
}

double* new_massiv(double*A, int n) {
	double B[10];
	double a;
	double* pB = &a;
	int j = 0;
	for (int i = 0; i < n; i++) {
		if ((i+1) % 2 == 0 && A[i] >= 0) {
			B[j] = A[i];
			j++;
		}
	}
	if (j < 10) {
		for (int k = j; k <= 9; k++) {
			B[k] = 0;
		}
	}
	return B;
}