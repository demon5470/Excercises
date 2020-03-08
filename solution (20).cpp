#include <iostream>

using namespace std;

int main() {
	int n, x[10], m, yy, zz;
	bool equivalent = false;
	cin >> n;
	for (int i = 0; i <= n-1; i++) {
		cin >> x[i];
	}
	for (int i = 0; i <= n-1; i++) {
		m = i;
		zz = x[i];
		if (i >= 2) {
			for (int i = 0; i <= m-1; i++) {
				if (zz == x[i]) {
					yy = i;
					for (int i = 0; i <= yy-1; i++) {
						if (zz == x[i]) {
							equivalent = true;
						}
					}
				}
			}
		}
	}
	if (equivalent) {
		cout << "TAIP";
	}
	else {
		cout << "NE";
	}
	return 0;
}