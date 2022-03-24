#include "Soldier.h"

TSoldier::TSoldier(double _health, int _damage)
{
  level = 1;
  damage = _damage;
  health = _health;
}

TSoldier::~TSoldier()
{
  level = 0;
  damage = 0;
  health = 0;
}

void TSoldier::Healing(double _health)
{
  health += _health;
}

