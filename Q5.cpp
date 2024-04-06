#include<iostream>
#include<iomanip>
using namespace std;

class RetailItem{
public:
    string Description;
    int UnitsOnHand;
    double Price;

//constructor
    RetailItem(string description, int units_on_hand, double price){
        Description = description;
        UnitsOnHand = units_on_hand;
        Price = price;
    }
};

int main()
{
    RetailItem Item1 = RetailItem("Jacket", 12, 59.95);
    RetailItem Item2 = RetailItem("Designer Jeans", 40, 34.95);
    RetailItem Item3 = RetailItem("Shirt", 20, 24.95);
    
    cout<< setw(25) << "Description" << setw(25) << "Units On Hand" << setw(25) << "Price" << endl;
    cout<< "Item #1 : " << setw(10) << Item1.Description << setw(19) << Item1.UnitsOnHand << setw(36) << Item1.Price << endl;
    cout<< "Item #2 : " << setw(18) << Item2.Description << setw(11) << Item2.UnitsOnHand << setw(36) << Item2.Price << endl;
    cout<< "Item #3 : " << setw(9) << Item3.Description << setw(20) << Item3.UnitsOnHand << setw(36) << Item3.Price << endl;
    
    return 0;
}