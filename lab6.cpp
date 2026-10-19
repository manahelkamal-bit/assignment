#include <iostream>
using namespace std;

int main() {
    int price, quantity, total, tax, grandTotal;

    cin >> price >> quantity;

    total = price * quantity;
    tax = total * 5 / 100;
    grandTotal = total + tax;

    cout << "Total: " << total << endl;
    cout << "Tax: " << tax << endl;
    cout << "Grand Total: " << grandTotal << endl;

    return 0;
}