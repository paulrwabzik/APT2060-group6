#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Number of customers: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        double creditLimit, price;
        int quantity;

        cout << "\n--- Customer " << i << " ---\n";
        cout << "Credit limit: ";
        cin >> creditLimit;
        cout << "Item price: ";
        cin >> price;
        cout << "Quantity: ";
        cin >> quantity;

        while (price * quantity > creditLimit) {
            cout << "Sorry, you cannot purchase goods worth such a value on credit\n";
            cout << "Re-enter quantity: ";
            cin >> quantity;
        }

        cout << "Thank You for purchasing from us\n";
        cout << "Value of purchase: " << fixed << setprecision(2)
             << price * quantity << endl;
    }

    return 0;
}