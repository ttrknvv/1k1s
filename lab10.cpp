#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "RUS");
	const int i = 99;
	int massiv[i], lenght, n;
	cout << "lenght of massiv(<= 99) = ";  cin >> lenght;
	srand((unsigned)time(NULL));
	for (n = 0; n < lenght; n++) {
		massiv[n] = rand() % 99;
		if (n >= 2) {
			massiv[n] = massiv[n - 1] + massiv[n - 2];
		}
		cout << "masiv[" << n << "] = " << massiv[n] << endl;
	}
	
	return 0;
}
