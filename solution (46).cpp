#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
  double a, b;
  cin >> a;
  cin >> b;
  cout << fixed << setprecision(2) << 2*sin(a)+(cos(b)-sqrt(tan(b)))*pow(log10(a),5) << endl;
  
  return 0;
}