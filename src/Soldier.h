#pragma once
#include "Infantry.h"

class TSoldier : public TInfantry
{
public:   
  TSoldier(double _health, int _damage);
  ~TSoldier();

  void Healing(double _health);
};