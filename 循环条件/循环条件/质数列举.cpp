#include<iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int i;
	for (i = 0; i < (b - a + 1); i++) {
		int c = a + i;
		int chu = 1;
		if (c < 2)
			continue;
		else if (2 == c)
			cout << c << " ";
		else if (c % 2 == 0)
			continue;
		else {
			for (int j = 3; j * j <= c; j += 2) {
				if (0 == c % j) {
					chu = 0;
					break;
				}

			}
			if (1 == chu) {
				cout << c << " ";
			}
		}
	}

	return 0;
}