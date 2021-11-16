//
// Created by TheAa on 4/1/2021.
//

#include <iostream>
#include <iomanip>

using namespace std;

#include "ItemToPurchase.h"

//Constructors

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemDescription = "none";
    itemQuantity = 0;
    itemPrice = 0.0;
}

ItemToPurchase::ItemToPurchase(string name, string description, double price, int quantity) {
    itemName = name;
    itemDescription = description;
    itemQuantity = quantity;
    itemPrice = price;
}

//Getters and setters

string ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetName(string name) {
    itemName = name;
}

double ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetPrice(double price) {
    itemPrice = price;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

string ItemToPurchase::GetDescription() {
    return itemDescription;
}

void ItemToPurchase::SetDescription(string description) {
    itemDescription = description;
}

//Other functions

void ItemToPurchase::GetItemInfo() {
    //cin.ignore();
    cout << "Enter the item name: ";
    getline(cin, itemName);
    cout << endl << "Enter the item price: ";
    cin >> itemPrice;
    cout << endl << "Enter the item quantity: ";
    cin >> itemQuantity;
    cout << endl;
}

void ItemToPurchase::PrintCost() {
    cout << setprecision(2) << fixed;
    cout << itemName << " " << itemQuantity << " @ $";
    cout << itemPrice << " = $" << (itemQuantity * itemPrice) << endl;
}

void ItemToPurchase::PrintDescription() {
    cout << itemName << ": " << itemDescription << endl;
}