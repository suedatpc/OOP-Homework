#include<iostream>
using namespace std;

class Inventory{
private:
    int ItemNumber;
    int Quantity;
    double Cost;
    double TotalCost;

public:
//constructor
    Inventory(int itemNum, int quantity, double cost, double totalCost){
        ItemNumber = itemNum;
        Quantity = quantity;
        Cost = cost;
        TotalCost = totalCost;
    }

//constructor #2
    Inventory(int itemNum, int quantity, double cost){
        ItemNumber = itemNum;
        Quantity = quantity;
        Cost = cost;

        getTotalCost();
    }

    void setItemNumber(int itemNum){
        if(itemNum >= 0){
            ItemNumber = itemNum;
        } else {
            cout << "Error: Item number cannot be negative." << endl;
        }

    }
    void setQuantity(int quantity){
        if(quantity >= 0){
            Quantity = quantity;
        } else {
            cout << "Error: Quantity cannot be negative." << endl;
        }

    }
    void setCost(double cost){
        if(cost >= 0){
            Cost = cost;
        } else {
            cout << "Error: Cost cannot be negative." << endl;
        }
    }
    void SetTotalCost(double totalCost){
        TotalCost = Quantity * Cost;
    }

    int getItemNumber(){
        return ItemNumber;
    }
    int getQuantity(){
        return Quantity;
    }
    double getCost(){
        return Cost;
    }
    double getTotalCost(){
        return TotalCost;
    }

};

int main() {

    Inventory item(1234, 5, 10.5);
    item.setQuantity(-2); // This will trigger an error message
    item.setCost(-5.5);   // This will trigger an error message
    cout << item.getQuantity();
    return 0;
}

