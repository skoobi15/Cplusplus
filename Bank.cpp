#include <iostream>
#include <iomanip> //contains a function which sets precision for floating point numbers
using namespace std;

void showbalance(double balance) {
    cout << "Your balance is $" << setprecision (2) << fixed << balance << '\n'; // the 2 in parentheis specifies the number of digits after decimal point
}

double deposit () {
    double amount;
    cout << "Enter the amount you want to deposit: ";
    cin >> amount;
    return amount; 
}

double widthdraw () {
    double amount;
    cout << "Enter the amount you want to widthdraw: ";
    cin >> amount;
    return amount;
}

int main() {
    double balance;
    cout << "enter balance: ";
    cin >> balance;

    int choice;
    
    do {
        cout << "Enter your choice \n"
         << "1. To show balance \n"
         << "2. To deposit money \n"
         << "3. To widthdraw money \n"
         << "4. Exit \n";

        cin >> choice;
        
        switch (choice) {
            case 1:
                 showbalance (balance);
                 break;
            case 2:
                
                balance += deposit ();
                showbalance (balance);
                break;
            case 3:
                 
                 balance -= widthdraw ();
                 showbalance (balance);
                 break;
            case 4:
                 cout << "Bye bye";
                 break;
            default :
                cout << "Invalid choice \n";
                
            }
    } while (choice != 4);
return 0;
}