#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream is;
  ofstream os;

  is.open ("duom.txt");


  int a, b, c, getMax = 0, getMin, i = 0, x[100];
  while (is >> x[i]) {
  if (x[i] < getMin) {
    getMin = x[i];
  }
  if (x[i] > getMax) {
    getMax = x[i];
  }
  i++;
  }
  
  cout << "Minimumas yra "<< getMin << endl;
  cout << "Maksimumas yra " << getMax << endl;

  is.close();
  os.close();

  return 0;
}