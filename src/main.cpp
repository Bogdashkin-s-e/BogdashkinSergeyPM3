#include <iostream>

#include "Unit.h"
#include "Technic.h"
#include "Infantry.h"
#include "Tank.h"
#include "WarPlane.h"
#include "Soldier.h"
#include "Army.h"

int main()
{
  TUnit Aunit;
  Aunit.SetAbilities(1, 2);
  Aunit.SetDamage(100);
  Aunit.SetHealth(110.0);

  TSoldier ZSquad(1000.0, 100);
  ZSquad.SetAbilities(13,0);
  ZSquad.SetAbilities(14,1);
  ZSquad.SetAbilities(15,2);
  ZSquad.AddLevel(2);
  ZSquad.levelUpgrade();
  ZSquad.Healing(555.0);

  TTank T64(1000.0, 5000.0, 500, 3);
  T64.SetAbilities(23,0);
  T64.SetAbilities(4,1);
  T64.SetAbilities(5,2);
  TTank T644(5000);
  T644.SetAbilities(23, 0);
  T644.RepairArmor(144.0);

  TWarPlane Letuch(300.0, 500.5, 600, 4);
  Letuch.DamageIncrease(234);   
  Letuch.SetAbilities(44,0);
  Letuch.SetAbilities(43,1);

  TArmy PMI;
  PMI.AddUnit(&Aunit);
  PMI.AddUnit(&ZSquad);
  PMI.AddUnit(&T64);
  PMI.AddUnit(&T644);
  PMI.AddUnit(&Letuch);
  PMI.Print();

  return 0;
}
