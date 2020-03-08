#include <iostream>

using namespace std;

int main() {
	double n, x[10][1], count = 0, sum = 0, vid, skirt, minskirt, arbuz;
	cin >> n;
	for (int i = 0; i <= (n - 1); i++) {
		cin >> x[i][1];
		count++;
		sum += x[i][1];
		vid = sum/count;
		for (int i = 0; i <= (count - 1); i++) {
			if (x[i][1] >= vid) {
				skirt = x[i][1] - vid;
			}
			else if (vid > x[i][1]) {
				skirt = vid - x[i][1];
			}
			if (i == 0) {
				minskirt = skirt;
				arbuz = i;
			}
			if (i > 0 && skirt < minskirt) {
				minskirt = skirt;
				arbuz = i;
			}
		}
	}


	cout << arbuz + 1;
}