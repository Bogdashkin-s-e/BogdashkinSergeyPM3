#pragma once
#include "Unit.h"

class TArmy
{
public:   
  TArmy();
  ~TArmy();

  void AddUnit(TUnit* unit); 
  void Print();

  private: 
  TUnit** units;
  int armyCout;
};