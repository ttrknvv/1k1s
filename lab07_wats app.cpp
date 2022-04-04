#include <iostream>

using namespace std;

int SUMM = 0;

void even(int a) {
	if (a % 2 == 0) {
		SUMM += a;
	} 
}

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	
	cin >> n;
	
	while (n != 0) {
		even(n);
		cin >> n;
	}
	
	cout << "Сумма четных элементов = " << SUMM;
	return 0;
}