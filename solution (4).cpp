// Andrius Kacinskas Itf 19/1
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char lyg[6];
  int a, b, c, x;
  a = b = c = x = 0;
  cin >> lyg;
  if (lyg[0] >= '0' && lyg[0] <= '9') {
    a = (int)lyg[0] - '0';
  }
  if (lyg[2] >= '0' && lyg[2] <= '9') {
    b = (int)lyg[2] - '0';
  }
  if (lyg[4] >= '0' && lyg[4] <= '9') {
    c = (int)lyg[4] - '0';
  }

if (lyg[1] == '+') {
  if (lyg[0] == 'x') {
    x = c - b;
  }
  else if (lyg[2] == 'x') {
    x = c - a;
  } else if (lyg[4] == 'x') {
    x = a + b;
  }
} else if (lyg[1] == '-') {
  if (lyg[0] == 'x') {
    x = b + c;
  }
  else if (lyg[2] == 'x') {
    x = a - c;
  } else if (lyg[4] == 'x') {
    x = a - b;
  }
}

cout << x;
  
return 0;
}