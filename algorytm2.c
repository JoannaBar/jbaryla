// Liczby pierwsze
// Data   : 15.03.2008
// (C)2012 mgr Jerzy Wa�aszek
//----------------------------

#include <iostream>//ZMIANA DO ZADANIA ��CZENIE GA��ZI

using namespace std;

int main()
{
  unsigned int n,lp,p,d;
  bool t;

  cin >> n;
  lp = 0;
  p  = 2;
  while(lp < n)
  {
    t = true;
    for(d = 2; d < p; d++)
      if(p % d == 0)
      {
        t = false;
        break;
      }
    if(t)
    {
      cout << p << " ";
      lp++;
    }
    p++;
  }
  cout << endl;
  return 0;
}
