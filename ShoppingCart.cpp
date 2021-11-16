//
// Created by TheAa on 4/2/2021.
//

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart(string name, string date) {
    customerName = name;
    creationDate = date;
    counter = 0;
}

string ShoppingCart::GetName() const {
    return customerName;
}

string ShoppingCart::GetDate() const {
    return creationDate;
}

int ShoppingCart::GetQuantity() const {
    int totalNumberOfItems = 0;
    for (long unsigned int i = 0; i < itemsInCart.size(); i++) {
        totalNumberOfItems = totalNumberOfItems + itemsInCart.at(i).GetQuantity();
    }

    return totalNumberOfItems;
}

void ShoppingCart::Add(ItemToPurchase item) {

    counter++;


    if (itemsInCart.size() == 0) {
        itemsInCart.push_back(item);
        return;
    }

    for (long unsigned int i = 0; i < itemsInCart.size(); i++) {
        if (item.GetName() == itemsInCart.at(i).GetName()) {
            cout << "Item is already found in the cart. It will not be added." << endl;

            return;
        }

    }

    itemsInCart.push_back(item);

}

void ShoppingCart::Remove(string itemName) {
    for (long unsigned int i = 0; i < itemsInCart.size(); i++) {
        if (itemName == itemsInCart.at(i).GetName()) {
            itemsInCart.erase(itemsInCart.begin() + i);
            return;
        }
    }
    cout << "Item not found in cart. It will not be removed." << endl;
    return;
}

void ShoppingCart::UpdateQuantity(string itemName, int newQuantity) {
    for (long unsigned int i = 0; i < itemsInCart.size(); i++) {
        if (itemName == itemsInCart.at(i).GetName()) {
            itemsInCart.at(i).SetQuantity(newQuantity);
            return;
        }
    }

    cout << "Item not found in cart. It will not be modified." << endl;
}

double ShoppingCart::GetTotalCost() const {
    double total = 0.0;

    for (long unsigned int i = 0; i < itemsInCart.size(); i++) {
        total = total + (itemsInCart.at(i).GetPrice() * itemsInCart.at(i).GetQuantity());
    }

    return total;
}

void ShoppingCart::PrintDescriptions() {
    if (itemsInCart.size() == 0) {
        cout << customerName << "'s Shopping Cart - " << creationDate << endl << endl;
        cout << "Shopping cart is empty." << endl;
        return;
    }

    cout << customerName << "'s Shopping Cart - " << creationDate << endl << endl;
    cout << "Item Descriptions" << endl;

    for (long unsigned int i = 0; i < itemsInCart.size(); i++) {
        itemsInCart.at(i).PrintDescription();
    }
}

void ShoppingCart::PrintContents() {
    if (itemsInCart.size() == 0) {
        cout << customerName << "'s Shopping Cart - " << creationDate << endl;
        cout << "Shopping cart is empty." << endl;
        return;
    }


    cout << customerName << "'s Shopping Cart - " << creationDate << endl;
    cout << "Number of items: " << GetQuantity() << endl << endl;

    for (long unsigned int i = 0; i < itemsInCart.size(); i++) {
        itemsInCart.at(i).PrintCost();
    }

    cout << endl << "Total: $" << GetTotalCost() << endl;
}

