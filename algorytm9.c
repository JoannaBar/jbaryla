// MasterMind - komputer <-> cz�owiek
// Data: 13.08.2008
// (C)2012 mgr Jerzy Wa�aszek
//-----------------------------

#include <iostream>
<<<<<<< HEAD
#include <string>																
=======
#include <string>//ZMIANA DO ZADANIA
>>>>>>> Branch1
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
  string skoder,slamacz,sklucz,sk;
  int i,j,runda;

// generujemy kod kodera

  srand((unsigned)time(NULL));
  skoder = "";
  for(i = 0; i < 4; i++)
    skoder += char(65 + rand() % 6);

// rozpoczynamy rozgrywk�

  for(runda = 1; runda <= 6; runda++)//ZMIANA MASTER
  {

// odczytujemy kod �amacza

    cout << "Runda " << runda << " : ";
    cin >> slamacz;

// normalizujemy kod �amacza

    while(slamacz.length() < 4)
      slamacz += slamacz + '$';

// generujemy kod klucza

    sk = skoder; // kopia robocza kodu kodera
    sklucz = "";
    for(i = 0; i < 4; i++)
      if(sk[i] == slamacz[i])
      {
        sklucz += 'x';
        sk[i] = '#';      // wartownik w1
        slamacz[i] = '$'; // wartownik w2
      }
    for(i = 0; i < 4; i++)
      if(sk[i] != '#')
        for(j = 0; j < 4; j++)
          if(sk[i] == slamacz[j])
          {
            sklucz += 'o';
            slamacz[j] = '$'; // wartownik w2
            break;
          }

// wy�wietlamy kod klucza

    cout << "               : " << sklucz << endl;

// je�li odgadni�to kod kodera, ko�czymy

    if(sklucz == "xxxx") break;
  }
  cout << "KOD     : " << skoder << endl << endl;
  return 0;
}
