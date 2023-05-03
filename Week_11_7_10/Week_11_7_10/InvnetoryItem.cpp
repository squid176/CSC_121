#include "InventoryItem.h"
// Implementation code for InventoryItem class function storeInfo
void InventoryItem::storeInfo(int p, string d, int oH, double cost)
{
	partNum = p;
	description = d;
	onHand = oH;
	price = cost;
}