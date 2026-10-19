#include <iostream>
using namespace std;

int main() {
    int age, creditHours, feePerCreditHour;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter credit hours: ";
    cin >> creditHours;

    cout << "Enter fee per credit hour: ";
    cin >> feePerCreditHour;

    int totalFee = creditHours * feePerCreditHour;
    int discountFee = totalFee - 2000;

    cout << "Total Fee: " << totalFee << endl;
    cout << "Fee after discount: " << discountFee << endl;
    cout << "Year of Birth: " << 2026 - age << endl;
    cout << "Year you will turn 25: " << 2026 + (25 - age) << endl;

    return 0;
}