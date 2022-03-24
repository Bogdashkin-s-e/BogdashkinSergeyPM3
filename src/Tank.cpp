#include "Tank.h"

TTank::TTank(double _health, double _armor, int _damage, int levelTank)
{
  health = _health;
  damage = _damage;
  armor = (_armor * levelTank);
}
TTank::TTank(double Arm) : TTank(500, Arm, 300, 3) 
{ }

TTank::~TTank()
{ 
  health = 0;
  damage = 0;
  armor = 0;
}

void TTank::RepairArmor(double _armor)
{
  armor += _armor;
}

