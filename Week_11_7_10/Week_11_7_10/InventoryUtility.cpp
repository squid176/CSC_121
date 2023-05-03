#include "InventoryUtility.h"
#include <iostream>
#include <iomanip>
using namespace std;
/************************************************************
* createItem *
* This function stores user input data in the members of a *
* locally defined InventoryItem object, then returns it. *
************************************************************/
InventoryItem* InventoryUtility::createItem()
{
	InventoryItem* tempItem = new InventoryItem; // Local InventoryItem object
	int partNum; // Local variables to hold user input
	string description;
	int qty;
	double price;
	// Get the data from the user
	cout << "Enter data for the new part number \n";
	cout << "Part number: ";
	cin >> partNum;
	cout << "Description: ";
	cin.get(); // Move past the '\n' left in the
	// input buffer by the last input
	getline(cin, description);
	cout << "Quantity on hand: ";
	cin >> qty;
	cout << "Unit price: ";
	cin >> price;
	// Store the data in the InventoryItem object and return it
	tempItem->storeInfo(partNum, description, qty, price);
	return tempItem;
}
void InventoryUtility::showValues(const InventoryItem& item)
{
	cout << fixed << showpoint << setprecision(2) << endl;;
	cout << "Part Number : " << item.getPartNum() << endl;
	cout << "Description : " << item.getDescription() << endl;
	cout << "Units On Hand: " << item.getOnHand() << endl;
	cout << "Price : $" << item.getPrice() << endl;
}