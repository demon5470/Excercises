#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char x[4];
  cin.getline(x, 4);
  cout << (int)x[0]+(int)x[2]-2*48<<endl;

  return 0;
}


