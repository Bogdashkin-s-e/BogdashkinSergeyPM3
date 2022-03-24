#pragma once
#include "Unit.h"

class TInfantry : public TUnit
{
public:
  TInfantry();
  ~TInfantry();
  int Getlevel();
  void AddLevel(int _level);

  void levelUpgrade();
protected:
  int level;

};