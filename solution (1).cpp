#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int n, m, max = 0, count = 0;
  double sum = 0, vid;
  cin >> n >> m;
  
  int **a;
  a = new int *[n];

  for (int i = 0; i < n; i++) {
    a[i] = new int [m];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      sum += a[i][j];
      count++;
    }
  }

  vid = sum/count;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] > vid) {
        max++;
      }
    }
  }

  cout << fixed << setprecision (2) << "Vidurkis yra " << vid << endl;
  cout << "Didesnių elementų kiekis yra " << max << endl;

   for (int i = 0; i < n; i++) {
    delete [] a[i];
  }
    delete [] a;
  return 0;
}

