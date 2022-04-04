#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char a, b, c;
    cout << "Введите заглавную букву = "; cin >> a; cout << endl;
    cout << "Введите строчную букву = "; cin >> b;
    c = b - a;
    printf("Разница = %x", c);
    return 0;
}

