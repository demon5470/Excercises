#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
  ifstream is;
  ofstream os;

  is.open ("duom.txt");
  os.open ("rez.txt");

  double vid;
  int a, b, c;
  is >> a >> b >> c;
  vid = (a+b+c)/3.;
  os << fixed << setprecision (2) << vid << endl;

  is.close();
  os.close();

  return 0;
}