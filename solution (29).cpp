#include <iostream>

using namespace std;

int main()
{
    int n, zk, bzk = 0, d = 0, dsk = 0, count = 0;
    int x[100], y[100];
    bool susimov = false;
    /* y[i] - zuvu kiekis sugautas; bzk - bendras zuvu kiekis; x - diena; dsk - didziausias sugautas kiekis/diena;
    */
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        cin >> y[i];
        if (x[i] == 0) {
          break;
        }
        bzk += y[i];
        if (y[i] > dsk) {
            dsk = y[i];
            d = x[i];
        }
        }
        for (int i = 0; i < n-1; i++) {
               if (x[i] >= x[i+1]) {
                susimov = true;
            } 
        }

      

    cout << "Bendras karpių kiekis: " << bzk << endl;
    if (susimov) {
        cout << "Numeruodamas susimovė." << endl;
    } else  {
        cout << "Numeruodamas nesusimovė." << endl;
    }
    cout << "Geriausiai kibo " << d << " dieną." << endl;

    

    return 0;
}