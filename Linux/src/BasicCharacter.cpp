#include "../include/BasicCharacter.h"

void Pattern::normalization() {
  current = (max < current) ? max : current;
  current = (current < 0) ? 0 : current;
}

BasicCharacter::BasicCharacter(string name, Pattern hp, Pattern energy,
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

string BasicCharacter::getName() {
  return name;
}

Pattern BasicCharacter::getHP() {
  return hp;
}

Pattern BasicCharacter::getEnergy() {
  return energy;
}

unsigned BasicCharacter::getMaxCell() {
  return max_cell;
}

unsigned BasicCharacter::getCurrentCell() {
  return current_cell;
}

unsigned BasicCharacter::getCountMoney() {
  return count_money;
}

void BasicCharacter::setHP(unsigned new_max, unsigned new_regeneration) {
  hp.max = new_max;
  hp.regeneration = new_regeneration;
}

void BasicCharacter::changeHP(unsigned change) {
  hp.current += change;
  hp.normalization();
}

void BasicCharacter::setEnergy(unsigned new_max, unsigned new_regeneration) {
  energy.max = new_max;
  energy.regeneration = new_regeneration;
}

void BasicCharacter::changeEnery(unsigned change) {
  energy.current += change;
  energy.normalization();
}

void BasicCharacter::setMaxCell(unsigned new_max) {
  max_cell = new_max;
}

void BasicCharacter::setCountMoney(unsigned new_count) {
  count_money = new_count;
}
