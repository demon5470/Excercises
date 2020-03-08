#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char x[101], n[7] = "Stogas";
  bool fact = true;
  cin >> x;
  if (strlen(x) == strlen(n)) {
  for (int i = 0; i < 7; i++) {
  if ((int)x[i] != (int)n[i]) {
    cout << "NE" << endl;
    fact = false;
    break;
  } 
  }
  if (fact) {
  cout << "TAIP" << endl;
  }
  } 
  else {
    cout << "NE" << endl;
  }
  
    
 

  return 0;
}


