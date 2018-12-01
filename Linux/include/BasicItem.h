#ifndef _BASIC_ITEM_H_
#define _BASIC_ITEM_H_

#include "Header.h"

class BasicItem {
private:
	string name_item;
	unsigned size_item;
	unsigned price_buy;
	unsigned price_sell;
	unsigned rarity_item;
public:
	BasicItem(string name, unsigned size, unsigned buy,
						unsigned sell, unsigned rarity);

	string   getName();
	unsigned getSizeItem();
	unsigned getPriceBuy();
	unsigned getPriceSell();
	unsigned getRarity();
};

#endif /*_BASIC_ITEM_H_*/
