#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double n, x[10], z, yy, daug;
	cin >> n;
	for (int i = 0; i <= (n - 1); i++) {
		cin >> x[i];
		z = i;
		yy = x[i];
		if (i == 0) {
			daug = x[0];
		}
		else if (i == 1) { //jei tik 2 nariai
			daug = x[0] * x[1];
		}
		if (i > 1) {
			for (int i = 0; i <= z-1; i++) {
				if ((yy * x[i]) > daug)
					daug = yy * x[i];
			}
		}
	}
	
  if (daug == -0.00) {
    daug = 0.00;
  }

  cout << fixed << setprecision(2) << daug;



	return 0;
}