#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, m,  ncount = 0;
    double evidur = 0, nvidur = 0.;
    int x[10][10];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> x[i][j];
            if (x[i][j] < 0) {
                nvidur+=x[i][j];
                ncount++;
            }

        }
    }
    if (nvidur == 0 && ncount == 0) {
        cout << "NO";
        return 0;
    }
    evidur = nvidur/ncount;
    cout << fixed << setprecision (3) << evidur << endl;
    return 0;
}
