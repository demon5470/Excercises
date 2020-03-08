#include <iostream>
#include <fstream>
#include <iomanip>

void tranas (int x[10][10], int z[10][10]);
void isved (int z[10][10]);

using namespace std;

int main() {
  ifstream is;
  ofstream os;

  is.open ("duom.txt");
  os.open ("rez.txt");


  int n;
  int x[10][10];
  int z[10][10];
  is >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      is >> x[i][j];
    }
  }
  
  void tranas (int x[10][10], int z[10][10], int n);
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        z[i][j] = x[j][i];
      }
    }
  

  void isved (int z[10][10], int n); 
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        os << showpos << setw (4) << z[i][j];
    }
  os << endl;
  }
  


  is.close();
  os.close();

  return 0;
}