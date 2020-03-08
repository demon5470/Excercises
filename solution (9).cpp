#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char x[100];
  bool fact = true;
  int ilgis;
  cin.getline(x, 100);
  ilgis = strlen(x);
  if ((x[0] < 'A' || x[0] >'Z')) {
       fact = false;
    }
    else {
  for (int i = 1; i < ilgis; i++) {
 
    if ((int)x[i] < 'a' || (int)x[i] > 'z') {
      fact = false;
      break;
    }
  } 
    }
  if (fact) {
    cout << "TAIP" << endl;
  } else {
    cout << "NE" << endl;
  }
 
  
  

  
  
  

  return 0;
}


