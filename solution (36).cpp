#include <iostream>

using namespace std;
int main() {
  int a, n, sum=0;
  cin >> a >> n;
  for (int i=a; i<=n; i++) {
    sum+=i;
  }
  cout << sum << endl;
  return 0;
}