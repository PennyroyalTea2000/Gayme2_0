#ifndef _BASIC_CHARACTER_H_
#define _BASIC_CHARACTER_H_

#include "Header.h"

struct Pattern {
  unsigned max;
  int current;
  unsigned regeneration;
  void normalization();
};

class BasicCharacter {
protected:
  string name;
  Pattern hp;
  Pattern energy;
  unsigned max_cell;
  unsigned current_cell;
  unsigned count_money;

public:
  BasicCharacter(string name, Pattern hp, Pattern energy,
                 unsigned max_cell, unsigned current_cell,
                 unsigned count_money);
  string  getName();
  Pattern getHP();
  Pettern getEnergy();
  unsigned getMaxCell();
  unsigned getCurrentCell();
  unsigned getCountMoney();

  void setHP(unsigned new_max, unsigned new_regeneration);
  void changeHP(unsigned change);
  void setEnergy(unsigned new_max, unsigned new_regeneration);
  void changeEnergy(unsigned change);
  void setMaxCell(unsigned new_max);
  void setCountMoney(unsigned new_count);
};

#endif /*_BASIC_CHARACTER_H_*/
