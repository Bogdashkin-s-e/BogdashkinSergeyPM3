#include "Infantry.h"

TInfantry::TInfantry()
{
  level = 1;
}

TInfantry::~TInfantry()
{ level = 0;}

int TInfantry::Getlevel()
{
  return level;
}

void TInfantry::AddLevel(int _level)
{
  level += _level;
}

void TInfantry::levelUpgrade()
{
  health = health * level;
  damage = damage * level;
}

    

