#pragma once

class TUnit
{
public:  
  TUnit();
  ~TUnit();
    
  double GetHealth();
  int GetAbilities(int numberability);
  int GetDamage();

  void SetDamage(int damage);
  void SetHealth(double health);
  void SetAbilities(int ability, int i);

  void Display();

protected:
  int damage;     //урон юнита
  double health;  //здоровье юнита
  int *abilities; //способности юнита
  const int n = 3; //количество способностей
  double armor = 0;
};