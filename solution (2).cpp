#include <iostream>

using namespace std;

void ascending_order1(int *b, int n, int m);

int main() {
  int n, m, x, y, max;
  cin >> n;
  
  int *a, *b;
  a = new int [n];
 

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cin >> m;
   b = new int [n+m];

  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }  

  for (int i = m; i < n+m; i++) {
    b[i]=a[i-m];
  }

 void ascending_order1 (int *b, int n, int m);
    for (int i = 0; i < n+m-1; i++) {
      for (int j = i+1; j < n+m; j++) {
        if (b[i] > b[j]) {
        double t = b[i];
        b[i] = b[j];
        b[j] = t;
        }
      }
    }
      
    cout << b[0];

  for (int i = 1; i < n+m; i++) {
      cout << " " << b[i];
  }

  delete [] a;
  delete [] b;


  return 0;
}