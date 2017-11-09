// Wyszukiwanie najd�u�szego wsp�lnego podci�gu
// Data: 17.07.2008
// (C)2012 mgr Jerzy Wa�aszek
//-----------------------------

<<<<<<< HEAD
#include <iostream>																		//ZMIANA MASTER
#include <string>
=======
#include <iostream>
#include <string>//ZMIANA DO ZADANIA
>>>>>>> Branch1

using namespace std;

string s1,s2,sLCS; // zmienne globalne

// Funkcja oblicza d�ugo�� LCS dla s1 i s2
// i - indeks startu w s1
// j - indeks startu w s2
//----------------------------------------
int LCS(int i, int j)
{
  if(!s1[i] || !s2[j]) return 0;
  else if(s1[i] == s2[j]) return 1 + LCS(i+1,j+1);
  else return max(LCS(i+1,j),LCS(i,j+1));
}

int main()
{
  int i,j;

  getline(cin,s1);
  getline(cin,s2);
  sLCS = ""; i = j = 0;
  while(s1[i] && s2[j])
    if(s1[i] == s2[j])
    {
      sLCS += s1[i]; i++; j++;
    }
    else if(LCS(i+1,j) <= LCS(i,j+1)) j++; else i++;
  cout << sLCS << " : " << sLCS.length() << endl;
  return 0;
}
