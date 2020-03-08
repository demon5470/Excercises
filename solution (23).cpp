#include <iostream>

using namespace std;

int main() {
	int n, x[10], lyg1 = 0, lyg2;
	bool skirt = true;
	cin >> n;
	for (int i = 0; i <= n-1; i++) {
		cin >> x[i];
		lyg1 = i;
		lyg2 = x[i];
		if (i > 0) {
			for (int i = 0; i <= lyg1-1; i++) {
				if (lyg2 == x[i]) {
					skirt = false;
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
