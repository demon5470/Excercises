#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char n;
  int X;
  cin >> n;
  if (n >= 'A' && n <= 'Z') {
  cout << "TAIP" << endl;
  } else {
    cout << "NE" << endl;
  }

  return 0;
}


