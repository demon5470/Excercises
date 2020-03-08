#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if ((a == b && c == d)||(a == c && b == d)||(a == d && b == c)) {
      cout << "PAVYKS";
    } else {
      cout << "NEPAVYKS";
    }
    return 0;
}