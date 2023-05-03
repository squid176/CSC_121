#pragma once
#include "InventoryItem.h"
#include <iomanip>
#include <iostream>
using namespace std;
class InventoryUtility
{
public:
	InventoryItem* createItem();
	void showValues(const InventoryItem& item);
};
