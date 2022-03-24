#include "WarPlane.h"
#include <iostream>

TWarPlane::TWarPlane(double _health, double _armor, int _damage, int levelPlane)
{
  health = _health;
  armor = _armor;
  damage = (_damage * levelPlane);
}

TWarPlane::~TWarPlane()
{
  health = 0;
  damage = 0;
  armor = 0;
}

void TWarPlane::DamageIncrease(int _damage)
{
  damage += _damage;
}

