#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double vid = 0, count = 0, sum = 0;
    cin >> n;
    int x[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> x[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += x[i][n-i-1];
        count++;
    }

    vid = sum/count;

    cout << fixed << setprecision (2) << vid;



    return 0;
}
