#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double n, x[10], m, y[10], z[10], plius = 0, sum = 0, vid = -1;
	cin >> n;
	for (int i = 0; i <= (n - 1); i++) {
		cin >> x[i];
		if (x[i] > 0) {
			sum += x[i];
			plius++;
			vid = sum/plius;
		}
	}
	cin >> m;
	for (int i = 0; i <= m-1; i++) {
		cin >> y[i];
	}
	cout << "Vidurkis yra " << fixed << setprecision(2) << vid << endl;
	cout << "Pakeista seka:" << setprecision(0);
	for (int i = 0; i <=  m-1; i++) {
		if (y[i] <= vid) {
			z[i] = y[i];
		}
		else {
			z[i] = pow(y[i], 2);
		}
		cout << " " << z[i];
	}
	return 0;
}
