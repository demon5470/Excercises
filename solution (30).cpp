#include <iostream>

using namespace std;

int main() {
    int N,M, i, j;
    long long mas[10][10];
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        cin >> mas[i][j];
      }
    }


int max, suma = 0;
for (int j=0; j<M; j++) 
{
  max = mas[0][j];
  for (int i = 0; i < N; i++)
   {
    if (max<mas[i][j]) 
    {
      max = mas[i][j];
    }
  }
   suma+=max;
}

cout << suma << endl;
return 0;
}