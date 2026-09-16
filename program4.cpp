//pass an object to a function to calculate total price price and qty products class

#include <iostream>
using namespace std;

class Product {
public:
    int price;
    int quantity;
};

void calculateTotal(Product p) {
    int total = p.price * p.quantity;

    cout << "Total Price = " << total << endl;
}

int main() {
    Product p;

    cout << "Enter price: ";
    cin >> p.price;

    cout << "Enter quantity: ";
    cin >> p.quantity;

    calculateTotal(p);

    return 0;
}