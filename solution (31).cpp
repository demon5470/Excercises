#include <iostream>

using namespace std;

long long f (long long n) {
  long long a = 0, b = 1;
  for (int i = 0; i < n; i++) {
    a = a+b;
    b = a-b;
  } 
  return a;

}
 int main () {
   long long n;
   cin >> n;
   cout << f(n) << endl;
    

    return 0;
}