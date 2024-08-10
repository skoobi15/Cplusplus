#include <iostream>
#include <ctime> // to access time function
using namespace std;

//following program uses numbers corresponding to prizes of a lucky draw
int main () {
    srand(time(0)); // uses current time as seed
    int num = (rand() % 5 ) + 1;
    switch (num) {
        case 1:
          cout << "You won a tshirt!!";
          break;
        case 2:
          cout << "You won a free ice cream!!";
          break;
        case 3: 
          cout << "Oops sorry, better luck next time";
          break;
        case 4:
          cout << "You won target coupons!!";
          break;
        case 5:
          cout << "You won concert tickets!!!";
          break;
    }
}