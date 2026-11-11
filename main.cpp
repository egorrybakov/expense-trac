#include <iostream>
#include <string>
using namespace std;

int main() {
    string description;
    double amount;

    cout << "Enter description: ";
    cin >> description;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "You entered: " << description << " $ " << amount << endl;
    return 0;
}


