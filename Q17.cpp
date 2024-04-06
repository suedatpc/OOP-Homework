#include<iostream>
#include <iomanip> // For setprecision
using namespace std;

class InventoryItem{
private:
    string itemName;
    double itemCost;
    int onHand;

public:
    InventoryItem(string name, double cost, int quantity) {
        itemName = name;
        itemCost = cost;
        onHand = quantity;
    }

    string getName(){
        return itemName;
    }
    double getCost(){
        return itemCost;
    }
    int getQuantityOnHand(){
        return onHand;
    }

    void setQuantityOnHand(int quantity) {
        onHand = quantity;
    }
};

class CashRegister{
private:
    double Profit = 0.30;
    double SalesTax = 0.06;

public:
    void processPurchase(InventoryItem &item, int quantity) {
        if (quantity < 0) {
            cout << "Quantity cannot be negative!" << endl;
            return;
        }


        double unitPrice = item.getCost() * (1 + Profit);

        // Calculate subtotal
        double subTotal = unitPrice * quantity;

        // Calculate sales tax
        double salesTax = subTotal * SalesTax;

        // Calculate total
        double total = subTotal + salesTax;

        // Display purchase details
        cout << "Item: " << item.getName() << endl;
        cout << "Quantity: " << quantity << endl;
        cout << fixed << setprecision(2);
        cout << "Subtotal: $" << subTotal << endl;
        cout << "Sales Tax: $" << salesTax << endl;
        cout << "Total: $" << total << endl;

        // Update quantity on hand
        item.setQuantityOnHand(item.getQuantityOnHand() - quantity);
    }
};


 int main() {
    InventoryItem item("book", 10.0, 100);

    // Create a cash register
    CashRegister cashRegister; // Rename the variable to cashRegister

    int quantity;
    cout << "Enter the quantity of " << item.getName() << " being purchased: ";
    cin >> quantity;

    cashRegister.processPurchase(item, quantity); // Use cashRegister instead of register

    return 0;
}

