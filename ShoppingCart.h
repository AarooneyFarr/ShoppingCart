//
// Created by TheAa on 4/2/2021.
//

#ifndef SHOPPINGCART_SHOPPINGCART_H
#define SHOPPINGCART_SHOPPINGCART_H

#include "ItemToPurchase.h"
#include <vector>
#include <iomanip>


class ShoppingCart {
public:
    ShoppingCart(string name = "none", string date = "January 1, 2016");

    string GetName() const;

    string GetDate() const;

    int GetQuantity() const;

    void Add(ItemToPurchase item);

    void Remove(string itemName);

    void UpdateQuantity(string itemName, int newQuantity);

    double GetTotalCost() const;

    void PrintDescriptions();

    void PrintContents();

private:
    string customerName;
    string creationDate;
    vector<ItemToPurchase> itemsInCart;
    int counter;

};

#endif //SHOPPINGCART_SHOPPINGCART_H
