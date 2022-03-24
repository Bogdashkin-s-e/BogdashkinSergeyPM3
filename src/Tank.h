#pragma once
#include "Technic.h"

class TTank : public TTechnic
{
public:
  TTank(double _health, double _armor, int _damege, int levelTank);
  TTank(double Arm);
  ~TTank();

  void RepairArmor(double _armor);
};