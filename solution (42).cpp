#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() {
  double p, h, r, pi;
  cin >> p >> h >> r;
  if ( p==1) {
    cout << fixed << setprecision (2);
    cout << pow(r,2)*h*3.14159265359;
  } else {
    cout << fixed << setprecision (2);
    cout << 1./3*3.14159265359*h*pow(r, 2) << endl;
  }

 return 0;
}