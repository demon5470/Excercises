#include <iostream>

using namespace std;

int main() {
  int n, getMax;
  int x[10][10];
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> x[i][j];
    }
  }

  getMax = x[0][0];
  x[2][1] = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (x[i][j] > getMax)
        getMax = x[i][j];
    }
  }

  cout << getMax; 

  return 0;
}