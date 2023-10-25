#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    char x;
    cout << "welcome to food corner!" << "\n";
    cout << "login or sign up (to login enter 'l' and 's' for sign up ): ";
    cin >> x;
    switch (x) {
        case 'l':
            cout << "welcome to login page!" << "\n";
            loginPage();
            break;
        case 's':
            cout << "welcome to sign up page!" << "\n";
            signupPage();
            break;
    }
    //Call your functions here


    return 0;
}
