#include <iostream>
#include "Vector.h"

//+-*
template <class T>
class TMatrix : public TVector<T>
{
private:
  T** M; 
  int m; 
  int n; 

public:
  TMatrix()
  {
    n = m = 0;
    M = nullptr; 
  }

  TMatrix(int _m, int _n)
  {
    m = _m;
    n = _n;

    M = (T**) new T * [m]; 

    for (int i = 0; i < m; i++)
      M[i] = (T*)new T[n];

    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        M[i][j] = 0;
  }

  TMatrix(const TMatrix& _M)
  {
    m = _M.m;
    n = _M.n;

    M = (T**) new T * [m]; 

    for (int i = 0; i < m; i++)
      M[i] = (T*) new T[n];

    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        M[i][j] = _M.M[i][j];
  }

  T GetMij(int i, int j)
  {
    if ((m > 0) && (n > 0))
      return M[i][j];
    else
      return 0;
  }

  void SetMij(int i, int j, T value)
  {
    if ((i < 0) || (i >= m))
      return;
    if ((j < 0) || (j >= n))
      return;
    M[i][j] = value;
  }

  void Print(const char* ObjName)
  {
    cout << "Object: " << ObjName << endl;
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
        cout << M[i][j] << "\t";
      cout << endl;
    }
    cout << "---------------------" << endl << endl;
  }

 /* friend std::ostream& TMatrix<T>::operator<<(std::ostream& ostr, const TMatrix<T> &A) {
  for (int i = 0; i < A.n; i++) {
    for (int j = 0; j < A.n; j++)
      ostr << A.M[i][j] << "\t";
    ostr << std::endl;
  }
  return ostr;
  } */

  TMatrix operator=(const TMatrix& _M)
  {
    if (n > 0)
    {
      for (int i = 0; i < m; i++)
        delete[] M[i];
    }

    if (m > 0)
    {
      delete[] M;
    }

    m = _M.m;
    n = _M.n;

    M = (T**) new T * [m]; 
    for (int i = 0; i < m; i++)
      M[i] = (T*) new T[n];

    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        M[i][j] = _M.M[i][j];
    return *this;
  }

TMatrix operator+(const TMatrix& _v)
{
  if (_v.n == n && _v.m == m)  
  {
  TMatrix<T> res;
  
  res = (T**) new T * [m]; 

    for (int i = 0; i < m; i++)
      res[i] = (T*)new T[n];

    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        res[i][j] = M[i][j] + _v[i][j];

  return res;
  }
  else 
    return M; 
}



  ~TMatrix()
  {
    if (n > 0)
    {
      for (int i = 0; i < m; i++)
        delete[] M[i];
    }

    if (m > 0)
      delete[] M;
  }
};
