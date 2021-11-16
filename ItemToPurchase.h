//
// Created by TheAa on 4/1/2021.
//

#ifndef SHOPPINGCART_ITEMTOPURCHASE_H
#define SHOPPINGCART_ITEMTOPURCHASE_H

#include <iostream>
#include <string>

using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();

    ItemToPurchase(string name, string description, double price, int quantity);

    string GetName() const;

    void SetName(string name);

    double GetPrice() const;

    void SetPrice(double price);

    int GetQuantity() const;

    void SetQuantity(int quantity);

    string GetDescription();

    void SetDescription(string description);

    void GetItemInfo();

    void PrintCost();

    void PrintDescription();

private:
    string itemName;
    double itemPrice;
    int itemQuantity;
    string itemDescription;
};

#endif //SHOPPINGCART_ITEMTOPURCHASE_H
