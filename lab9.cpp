#include <iostream>

using namespace std;

float function(float a) {
	return pow(a, 3) - 1;
}

int main() {
	float x0 = 0;
	float S = 0;
	float x = 3, h;
	int n = 200;
	h = (x - x0) / n;
	while (x0 < x - h) {
		S = S + h * (function(x0) + function(x0 + h)) / 2;
		x0 = x0 + h;
	}
	cout << abs(S);
}