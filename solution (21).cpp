#include <iostream>

using namespace std;

int main() {
	int n, x[10], getMax = 0, getMax2 = 0;
	cin >> n;

	for (int i = 0; i <= n-1; i++) {
		cin >> x[i];
	}
	for (int i = 0; i <= n-1; i++) {
		if (i == 1) { // jeigu aibej tik du elementai
			if (x[0] >= x[1]) {
				getMax = x[0];
				getMax2 = x[1];
			}
			else {
				getMax = x[1];
				getMax2 = x[0];
			}
		}
		else if (x[i] >= getMax) {
			getMax2 = getMax;
			getMax = x[i];
		}
		else if ((x[i] < getMax) && (x[i] > getMax2)) {
			getMax2 = x[i];
		}
	}
	cout << getMax + getMax2;

	return 0;
}