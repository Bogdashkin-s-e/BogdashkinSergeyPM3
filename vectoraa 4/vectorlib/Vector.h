#ifndef _MY_TVector_
#define _MY_TVector_

#include <iostream>

using namespace std;

template <class T>
class TVector
{
protected:
  int length;
  T* x;
public:
  TVector<T>* vec;
  TVector();
  TVector(T _v);
  TVector(int rowsCount, T* _v);
  TVector(int rowsCount, T _v);
  TVector(TVector<T>& _v);
  ~TVector();

  TVector<T> operator +(TVector<T>& _v);
  TVector<T> operator -(TVector<T>& _v);
  TVector<T> operator *(TVector<T>& _v);
  TVector<T> operator /(TVector<T>& _v);
  TVector<T>& operator =(TVector<T>& _v);
  T& operator[] (const int index);

  //TVector<T>& operator +=(TVector<T>& _v);
  //TVector<T>& operator -=(TVector<T>& _v);

  template <class T1>
  friend ostream& operator<< (ostream& ostr, const TVector<T1> &A);
  template <class T1>
  friend istream& operator >> (istream& istr, TVector<T1> &A);

  int Length();
};

template <class T1>
ostream& operator<< (ostream& ostr, const TVector<T1> &A) {
  for (int i = 0; i < A.length; i++) {
    ostr << A.x[i] << "\t";
  }
  ostr << endl;
  return ostr;
}

template <class T1>
istream& operator >> (istream& istr, TVector<T1> &A) {
  for (int i = 0; i < A.length; i++) {
    istr >> A.x[i];
  }
  return istr;
}

#define MIN(a,b)(a>b?b:a)
#define MAX(a,b)(a>b?a:b)

template <class T>
TVector<T>::TVector()
{
  length = 0;
  x = 0;
}

template <class T>
TVector<T>::TVector(T _v)
{
  length = 1;
  x = new T [length];
  x[0] = _v;
}

template <class T>
TVector<T>::TVector(int N, T* _v) //копирование с указанием пространства
{
  length = N;

  x = new T [length];
  for (int i = 0; i < length; i++)
    x[i] = _v[i];
}

template <class T>
TVector<T>::TVector(int N, T _v) //задание нового 
{
  length = N;
  x = new T [length];
  for (int i = 0; i < length; i++)
    x[i] = _v;
}

template <class T>
TVector<T>::TVector(TVector<T>& _v) // копирование с тем же пространством
{
  length = _v.length;
  x = new T [length];
  for (int i = 0; i < length;i = i + 1)
    x[i] = _v.x[i];
}

template <class T>
TVector<T>::~TVector()
{
  length = 0;
  if (x != 0)
    delete [] x;
  x = 0;
}

template <class T>
TVector<T> TVector<T>::operator +(TVector<T>& _v)
{
  TVector<T> res;
  res.length = MIN(length, _v.length);
  res.x = new T [res.length];
  for (int i = 0; i < res.length; i++)
  {
    res.x[i] = x[i] + _v.x[i];
  }
  return res;
}

template <class T>
TVector<T> TVector<T>::operator -(TVector<T>& _v)
{
  TVector<T> res;
  res.length = MIN(length, _v.length);
  res.x = new T [res.length];
  for (int i = 0; i < res.length; i++)
  {
    res.x[i] = x[i] - _v.x[i];
  }
  return res;
}

template <class T>
TVector<T> TVector<T>::operator *(TVector<T>& _v)
{
  TVector<T> res;
  res.length = MIN(length, _v.length);
  res.x = new T [res.length];
  for (int i = 0; i < res.length; i++)
  {
    res.x[i] = x[i] * _v.x[i];
  }
  return res;
}

template <class T>
TVector<T> TVector<T>::operator /(TVector<T>& _v)
{
  TVector<T> res;
  res.length = MIN(length, _v.length);
  res.x = new T [res.length];
  for (int i = 0; i < res.length; i++)
  {
    res.x[i] = x[i] / _v.x[i];
  }
  return res;
}

template <class T>
TVector<T>& TVector<T>::operator =(TVector<T>& _v)
{
  if (this == &_v)
    return *this;

  length = _v.length;
  x = new T [length];
  for (int i = 0; i < length; i++)
    x[i] = _v.x[i];
  return *this;
}

template <class T>
T& TVector<T>::operator[] (const int index)
{
  if ((index >= 0) && (index < length))
    return x[index];
  return x[0];
}

/*
template <class T>
TVector<T>& TVector<T>::operator +=(TVector<T>& _v)
{
  length = MIN(length, _v.length);
  for (int i = 0; i < length; i++)
  {
    x[i] += _v.x[i];
  }
  return *this;
}

template <class T>
TVector<T>& TVector<T>::operator -=(TVector<T>& _v)
{
  length = MIN(length, _v.length);
  for (int i = 0; i < length; i++)
  {
    x[i] -= _v.x[i];
  }
  return *this;
} */

template <class T>
int TVector<T>::Length()
{
  return length;
}


#endif