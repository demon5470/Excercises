#include <iostream>
#include <fstream>
#include <iomanip>

void isved (int n, int x[10][10]);

using namespace std;

int main() {
  ofstream os;

  os.open ("rez.txt");


  int n, getVid, sum, count;
  int x[10][10];
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> x[i][j];
      count++;
      sum += x[i][j];
    }
  }
  
  getVid = sum/count;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
    if (x[i][j] < getVid) {
      x[i][j] = 0;
      }
    } 
  
  } 
  
  void isved (int n, int x[10][10]);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
    os << setw(4) << x[i][j];
    }
  os << endl;
  }

  os.close();

  return 0;
}