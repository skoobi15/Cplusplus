#include <iostream>
#include <ctime>
using namespace std;

char userchoice() { //function for user selecting their choice
    char u;
    cout << "ROCK PAPER SCISSORS" << "\n \n";
    cout << "Enter" << endl
         << "R (for rock)" << endl
         << "P (for paper)" << endl
         << "S (for scissors)" << endl;
    cin >> u;
    return u;
}

char computerchoice() {
    srand (time(0));
    int num = (rand()%3)+1;

    char hand;

    switch (num) {
        case 1:
           hand = 82;
           break;
        case 2: 
           hand = 80;
           break;
        case 3: 
           hand = 83;
    }
    return hand;
}

int main() {
 char a = userchoice();
 cout << "\n";
 char b = computerchoice();
 cout << "computer chose: " << b << endl;

 if (a==b) {
    cout << "Tie";
}

else if (b==82) {
    if (a==83 || a==115) {
        cout << "oops! Better luck next time";
    }
    else if (a==80 || a==112) {
        cout << "You WIN!!!";
    } 
}

else if (b==80) {
    if (a==82 || a==114) {
        cout << "oops! Better luck next time";
    }
    else if (a==83 || a==115) {
        cout << "You WIN!!!";
    } 
}

else if (b==83) {
    if (a==82 || a== 114) {
        cout << "You WIN!!!";
    }
    else if (a==80 || a==112) {
        cout << "oops! Better luck next time";
    } 
}
return 0;
}