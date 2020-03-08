#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double n, z[10], quad, max, sum;
	cin >> n;
	sum = 0;
	for (int i = 0; i <= (n - 1); i++) {
		cin >> z[i];
		quad = pow(z[i], 2);
		sum += quad;
		if (i == (n - 1)) { // paskutinis elementas be kablelio
			cout << fixed << setprecision(0) << quad << endl;
		}
		else {
			cout << fixed << setprecision (0) << quad << ",";
		}
		if (i == 0 || quad > max) { //visi likusieji elementai su kableliais
			max = quad;
		}
	}
	cout << fixed << setprecision (0) << "suma " << sum << endl << "max " << max;
	return 0;
}
