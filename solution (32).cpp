#include <iostream>

using namespace std;

int main()
{
    int n, m, maxt = 0;
    int x[10][10];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        if (x[0][0] > maxt) {
            maxt = x[0][0];
        }
        if (x[0][m-1] > maxt) {
            maxt = x[0][m-1];
        }
        if (x[n-1][0] > maxt) {
            maxt = x[n-1][0];
        } if (x[n-1][m-1] > maxt) {
            maxt = x[n-1][m-1];
        }
    }

    cout << maxt;

    return 0;
}
