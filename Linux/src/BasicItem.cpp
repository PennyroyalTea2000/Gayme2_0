#include "../include/BasicItem.h"

BasicItem::BasicItem(string name, unsigned size, unsigned buy,
          unsigned sell, unsigned rarity)
{
  name_item   = name;
  size_item   = size;
  price_buy   = buy;
  price_sell  = sell;
  rarity_item = rarity;
}

string BasicItem::getName() {
  return name_item;
}

unsigned BasicItem::getSizeItem() {
  return size_item;
}

unsigned BasicItem::getPriceBuy() {
  return price_buy;
}

unsigned BasicItem::getPriceSell() {
  return price_sell;
}

unsigned BasicItem::getRarity() {
  return rarity_item;
}
