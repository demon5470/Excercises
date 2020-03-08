#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
  int a;
  cin >> a;
  cout << (a/100)%100 + (a-a/100%100*100)/10 + a%10 << endl;

  return 0;
}