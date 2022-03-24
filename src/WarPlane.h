#pragma once
#include "Technic.h"

class TWarPlane : public TTechnic
{
public:
  TWarPlane(double _health, double _armor, int _damage, int levelPlane);
  ~TWarPlane();

  void DamageIncrease(int _damage);
};