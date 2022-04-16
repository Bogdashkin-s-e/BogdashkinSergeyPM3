#include "Technic.h"
#include <iostream>

TTechnic::TTechnic()
{
  armor = 1000;
}

TTechnic::~TTechnic()
{ 
  armor = 0;
}

double TTechnic::GetArmor()
{
  return armor;
}

void TTechnic::SetArmor(double armor)
{
  this->armor = armor;
}

    

