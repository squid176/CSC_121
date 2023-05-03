// This program uses a constant reference parameter.
// It also shows how to return an object from a function.
#include "InventoryItem.h"
#include "InventoryUtility.h"
#include <iostream>
using namespace std;
 
//*************** main *****************
int main()
{
	InventoryUtility iu;
	InventoryItem *part = iu.createItem();
	cout << part;
	iu.showValues(*part);
	return 0;
}