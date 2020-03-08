#include <iostream>
using namespace std;
int main()
{
    int n, k, maxt;
    int x[10][10];
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        cin >> x[i][j];
        }
    }
    if (n <= k) {
        cout << "NO";
    }
     else {
        maxt = x[0][k];
        for (int i = 0; i < n; i++) {
                for (int j = k; j < n; j++) {
            if (x[i][j] > maxt) {
                maxt = x[i][j];
            }
                }
        }
    cout << maxt;

     }
    return 0;
}