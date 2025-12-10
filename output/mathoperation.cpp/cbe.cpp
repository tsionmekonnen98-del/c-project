#include <iostream>
using namespace std;

void LoginMENU();
void menu();
void menuSelection(int choice);

int main() {
    int choice;
    do {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;
        menuSelection(choice);
    } while (choice != 2);

    return 0;
}

void menu() {
    cout << "\nWelcome to CBE Mobile Banking. Press * to navigate back any time.\n";
    cout << "Select one of the following options below:\n";
    cout << "1. Login" << endl;
    cout << "2. Exit" << endl;
}

void menuSelection(int choice) {
    switch (choice) {
        case 1:
            LoginMENU();
            break;
        case 2:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
    }
}

void LoginMENU() {
    int pin;
    cout << "Please enter your PIN to login: ";
    cin >> pin;

    if (pin == 1234) {
        cout << "Welcome to CBE Mobile Banking!" << endl;
        cout << "1. My Account" << endl;
        cout << "2. Transfer to any CBE account" << endl;
        cout << "3. Transfer to other account" << endl;
        cout << "4. Top up airtime" << endl;
        cout << "5. More options" << endl;
    } else {
        cout << "Incorrect PIN!" << endl;
    }
}
