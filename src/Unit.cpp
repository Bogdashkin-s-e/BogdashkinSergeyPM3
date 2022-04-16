#include "Unit.h"
#include <iostream>

TUnit::TUnit()
{
  armor = 0;
  damage = 5;
  health = 100;
  abilities = new int [n];
}

TUnit::~TUnit()
{
  delete [] abilities;
}

double TUnit::GetHealth()
{
  return health;
}

int TUnit::GetDamage()
{
  return damage;
}

int TUnit::GetAbilities(int numberability)
{
  if ((numberability >=0 ) && (numberability <= n))
  {
    return abilities[numberability];
  }
  return 0;
} 

void TUnit::SetHealth(double health)
{
  this->health = health;
}

void TUnit::SetDamage(int damage)
{
  this->damage = damage;
}

void TUnit::SetAbilities(int ability, int i)
{
  if ((i >= 0) && (i < n))
  {
    abilities[i] = ability;
  }
}

void TUnit::Display()
{
  std::cout << "UNITS: \t" << "\n";
  std::cout << "health = \t" << this->GetHealth() << "\n";
  std::cout << "damage = \t" << this->GetDamage() << "\n";
  std::cout << "armor = \t" << armor << "\n";
  std::cout << "abilities: ";
  for (int i = 0; i < n; i++)
    std::cout << ":" << abilities[i] << " ";
  std::cout << "\n" << std::endl;
}

    

