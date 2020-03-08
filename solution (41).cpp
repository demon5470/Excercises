#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if ((a % 66 == 0 && a < 100) || (a > 999 && a % 66 == 0)) {
        cout << "TAIP" << endl;
    } else {
        cout << "NE" << endl;
    }


    return 0;
}