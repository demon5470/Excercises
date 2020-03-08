#include <iostream>


using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if ( c == 0 && b == 0 && a != 0) {
        cout << a-1 << " 59" << " 59" << endl;
    } else if (c == 0 && b != 0) {
        cout << a << " " << b-1 << " 59" << endl;
    } else if (a == 0 && b == 0 && c == 0) {
        cout << "23" << " 59" << " 59" << endl;
    } else {
      cout << a << " " << b << " " << c-1 << endl;
    }

    return 0;
}