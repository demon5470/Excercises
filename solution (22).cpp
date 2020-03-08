#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, x[10], m, yy;
	bool skirt = false;
	cin >> n;
	for (int i = 0; i <= n-1; i++) {
		cin >> x[i];
	}
	for (int i = 0; i <= n-1; i++) {
		m = i;
		yy = x[i];
		if (i >= 1) {
			for (int i = 0; i <= m-1; i++) {
				if ((abs(yy - x[i])) == 1) {
					skirt = true;
				}
			}
		}
	}
	if (skirt) {
		cout << "TAIP";
	}
	else {
		cout << "NE";
	}

	return 0;
}
