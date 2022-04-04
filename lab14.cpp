#include <iostream> 

using namespace std;

int main()
{
	const int ci = 4;
	int varr[ci][ci]; int promezh, g = 0;
	for (int i = 0; i < ci; i++) {
		for (int k = 0; k < ci; k++) {
			cin >> varr[i][k];
		}
	}
	for (int h = 0; h < ci; h++) {
		for (; g < ci;) {
			if (varr[h][g] == varr[0][0]) { promezh = varr[h][g]; }
			if (varr[h][g] <= promezh) {
				promezh = varr[h][g]; 
			}
			g++;
			break;
		}
	}
	int *pvarr = *varr;
	cout << "The smallest element of main diagonal: " << promezh;
	return 0;
}
