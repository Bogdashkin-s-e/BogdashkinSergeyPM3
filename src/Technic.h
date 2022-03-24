#pragma once
#include "Unit.h"

class TTechnic : public TUnit
{
public:
  TTechnic();
  ~TTechnic();
    
  double GetArmor();
  void SetArmor(double n);
};