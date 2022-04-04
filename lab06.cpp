#include <iostream>
#include <windows.h>
#include <stdio.h>
#include "russian.h"
#include "number.h"
#include "english.h"

using namespace std;

void vivod() {
	cout << "Что вы будете вводить? 1 - Русскую строчную букву и цифру;" << endl 
		<< "2 - Английскую строчную букву и цифру;" << endl << "3 - Русскую строчную букву и Английскую строчную букву;"	
		<< endl << "4 - Две цифры;" << endl << "5 - Две русские строчные буквы;" << endl << 
		"6 - Две английские строчные буквы?" << endl << "Введите цифру варианта = ";
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char b, n, c; 
	vivod();  
	cin >> n; 
	while (n < '1' || n > '6') {
		cout << "Error! Try again!" << endl;
		vivod();
		cin >> n; 
	}
		if (n == '1') {
			cout << "Введите строчную русскую букву, а затем цифру!" << endl << "Ввод = "; cin >> b; cin >> c;
			cout << russian(b) << endl;
			printf("%x", number(c));
		}
		else if (n == '2') {
			cout << "Введите строчную английскую букву, а затем цифру!" << endl << "Ввод = "; cin >> b; cin >> c;
			printf("%x\n", english(b)); printf("%x", number(c));
		}
		else if (n == '3') {
			cout << "Введите строчную русскую букву, а затем строчную английскую букву" << endl << "Ввод = "; cin >> b; cin >> c;
			cout << russian(b) << endl; printf("%x", english(c));
		}
		else if (n == '4') {
			cout << "Введите 2 цифры через пробел" << endl << "Ввод = "; cin >> b;  cin >> c;
			printf("%x\n", number(b)); printf("%x", number(c));
		}
		else if (n == '5') {
			cout << "Введите две строчные русские буквы через пробел" << endl << "Ввод = "; cin >> b; cin >> c;
			cout << russian(b) << endl; cout << russian(c);
		}
		else if (n == '6') {
			cout << "Введите две строчные английские буквы через пробел" << endl << "Ввод = "; cin >> b; cin >> c;
			printf("%x\n", english(b)); printf("%x", english(c));
		}
		return 0;
}