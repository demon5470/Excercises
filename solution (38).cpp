#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    cin >> a;
     cout << setprecision (2) << fixed;

    if (a > 1000 && a <= 2000 ) {
        cout << a*0.28*3.45*0.97 << endl;
    } else if (a >= 2000) {
        cout << a*0.28*3.45*0.96 << endl;
    } else {
        cout << a*0.28*3.45 << endl;
    }

    return 0;
}