#include <iostream>
using namespace std;
int main() {
  int a, b, c, d, e;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;
  cout << "Pamokų skaičius: " << a+b+c+d+e << endl;
  cout << "Tai sudaro minučių: " << a*45+b*45+c*45+45*d+e*45 << endl;
 
  return 0;
}