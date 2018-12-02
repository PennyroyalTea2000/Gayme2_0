#include "../include/BasicCharecter.h"

void Pattern::normalization() {
  current = (max < current) ? max : current;
  current = (current < 0) ? 0 : current;
}

BasicCharecter::BasicCharecter(string name, Pattern hp, Pattern energy,
                               unsigned max_cell, unsigned current_cell,
                               unsigned count_money)
{
  this.name         = name;
  this.hp           = hp;
  this.energy       = energy;
  this.max_cell     = max_cell;
  this.current_cell = current_cell;
  this.count_money  = count_money;
}

string BasicCharecter::getName() {
  return name;
}

Pattern BasicCharecter::getHP() {
  return hp;
}

Pattern BasicCharecter::getEnergy() {
  return energy;
}

unsigned BasicCharecter::getMaxCell() {
  return max_cell;
}

unsigned BasicCharecter::getCurrentCell() {
  return current_cell;
}

unsigned BasicCharecter::getCountMoney() {
  return count_money;
}
