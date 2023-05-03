#pragma once
#include <string>
using namespace std;
class InventoryItem
{
private:
	int partNum = -1; // Part number
	string description = ""; // Item description
	int onHand = -1; // Units on hand
	double price = -1; // Unit price
public:
	void storeInfo(int p, string d, int oH, double cost); // Prototype
	int getPartNum() const // The get functions have all been made
	{
		return partNum;
	} // const functions. This ensures they
	 // cannot alter any class member data.
	string getDescription() const
	{
		return description;
	}
	int getOnHand() const
	{
		return onHand;
	}
	double getPrice() const
	{
		return price;
	}
};