#include <iostream>

using namespace std;

int main()
{
    int n, m, tmax;
    int x[10][10];
    cin >> n >> m;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x[i][j];
        }
    }
    if (n < 2 ) {
        cout << "No";
        return 0;
    }
    tmax = x[1][0];
    for (int j = 1; j < m; j++) {
        if (x[1][j] > tmax)
            tmax = x[1][j];
    }

    cout << tmax;

    return 0;
}
