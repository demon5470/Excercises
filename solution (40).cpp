#include <iostream>


using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x%10 == 0) {
      cout << x << " metu" << endl;
    } else if (x%100 >= 11 && x%100 <= 19) {
      cout << x << " metu" << endl; 
    } else {
      cout << x << " metai" << endl;
    }

    return 0;
}
