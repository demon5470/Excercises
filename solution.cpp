#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void max_element(int *a, int n, int &max);
void min_element(int *a, int n, int &min);
void vid_element(int *a, int n, int count, double sum, double &vid);

int main() {

  ifstream is;
  ofstream os;

  is.open ("seka.txt");
  os.open ("seka_rez.txt");

  int n, max, min, count;
  double sum = 0, vid;
  is >> n;
  
  int *a;
  a = new int [n];
 
  for (int i = 0; i < n; i++) {
    is >> a[i];
  }

  max_element (a, n, max);
  min_element (a, n, min);
  vid_element(a, n, count, sum, vid);


  
  
    os << min << " " << max << " " << fixed << setprecision (2) << vid;

    delete [] a;

  is.close();
  os.close();

  
  

  return 0;
}

void max_element (int *a, int n, int &max) {
      max = a[0];
      for (int i = 0; i < n; i++) {
      if (a[i] > max) {
        max = a[i];
        }
      }
}
    

void min_element (int *a, int n, int &min) {
      min = a[0];
      for (int i = 0; i < n; i++) {
        if (a[i] < min) {
          min = a[i];
        }
      }
}
      

void vid_element(int *a, int n, int count, double sum, double &vid) {
    count = 0;
    for (int i = 0; i < n; i++) {
      sum += a[i];
      count++;
    }
    vid = sum/count;
}