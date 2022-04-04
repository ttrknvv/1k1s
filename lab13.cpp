#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char predl[255] = "", result[255] = "", promezh[] = " "; 
	int schetchik = 0, k = 0, n = 0, p, t;
	cout << "Input string: ";
	cin.getline(predl, 255);
	t = strlen(predl);
	predl[t] = ' ';
	for (int i = 0; i <= strlen(predl); i++) {
		if (predl[i] == ' ') {
			schetchik++;
			p = schetchik;
		}
		if (schetchik == 1 && p == 1) {
			for (; k <= i; k++) {
				result[n] = predl[k];
				n++;
			}
			p++;
		}
		if (schetchik == 2) {
			schetchik = 0;
			k = i;
		}
	}
	for (int j = 0; j <= strlen(result); j++) {
		cout << result[j];
	}
	return 0;
}