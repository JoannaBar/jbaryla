// Ci¹g arytmetyczny
// Data   : 6.02.2011
// (C)2012 mgr Jerzy Wa³aszek
//----------------------------

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int    n,i;
  double a,d;

  cout << fixed
       << setprecision(3);

  cin >> n >> a >> d;

  for(i = 1; i <= n; i++)
    cout << setw(9)
         << a + (i - 1) * d
         << " ";

  cout << endl;

  return 0;
}
//edycja algorytmu w tym miejscu
//sprawdzam

