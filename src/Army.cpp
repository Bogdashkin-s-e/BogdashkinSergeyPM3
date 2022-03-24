#include "Army.h"
#include <iostream>

TArmy::TArmy()
{
  armyCout = 0;
  units = nullptr;
}

TArmy::~TArmy()
{
  if (units != nullptr)
    delete[] units;
}


void TArmy::AddUnit(TUnit* unit)
{
  if (armyCout== 0)
  {
    units = new TUnit * [1];
    armyCout = 1;
    units[0] = unit;
  }
  else 
  {
    TUnit** tmp = new TUnit*[armyCout + 1];

    for (int i = 0; i < armyCout; i++)
    {
      tmp[i] = units[i];
    }

    delete[] units;

    units = tmp;
    units[armyCout] = unit;
    armyCout++;
    }
}

void TArmy::Print()
{
  for (int i = 0; i < armyCout; i++)
  {
    units[i]->Display();
  }
}
