#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b && a <= c) {
      cout << "TAIP" << endl;
  } else {
    cout << "NE" << endl;
  }
  
  return 0;
}
