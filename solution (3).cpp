#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {

  ifstream is;
  ofstream os;

  is.open ("duom.txt");
  os.open ("rez.txt");

  vector <int> vx; 
  int n, x, nv, k, a;
  is >> n >> k;
  for (int i = 0; i < n; i++) {
    is >> x;
    vx.push_back(x);
  }  

 

  for (unsigned int i = 0; i < k; i++) {
      is >> a;
      vx.erase(vx.begin()+a-1);
  }
 nv = vx.size();
  for (unsigned int i = 0; i < nv; i++) {
    if (i != nv-1) {
    os << vx[i] << ' ';
    } else {
      os << vx[i];
      }
    }
  

  is.close();
  os.close();

  return 0;
}