#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    double n, x[10], sum = 0, vid = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        if (i != 0 && i != n-1) {
            sum += x[i];
            vid = sum/double(i);
        }
    }

    cout << fixed << setprecision (3) << vid << endl;

    return 0;
}
