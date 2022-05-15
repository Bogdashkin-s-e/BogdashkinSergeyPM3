#include <iostream>
#include "Vector.h"

int main()
{
  TVector<double> a(3, 35.3);
  TVector<double> c(3, 5);
  std::cin >> c;

  std::cout<< "C**\n" << c << "\n";
  std::cout<< "A*\n" << a << "\n";
  std::cout<< "A+C**\n" << a+c << "\nHi\n";



  /*
  int i, j;
  for (i = 0; i < 2; i++)
    for (j = 0; j < 3; j++)
      M.SetMij(i, j, i + j);

  std::cout<< M << "\nHi\n";

  M.Print("M");

  TMatrix<int> M2=M;

  TMatrix<int> M3(2, 3);
  M3 = M2 + M;
  M3.Print("M3");*/

  return 0;
}
