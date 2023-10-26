#include "functions.h"
#include <iostream>

using namespace std;

int loginPage() {

}


void setPassword(char arr1[100][30], char arr2[100][30]) {
    char x, y;
    cout << "enter password: ";
    cin.getline(arr1[x], 30);
    cin.ignore();
    cout << "reenter password: ";
    cin.getline(arr2[x], 30);
    cin.ignore();
    if (arr1[x][y] == arr2[x][y] && y >= 8) {
        return;
    } else {
        return setPassword(arr1, arr2);
    }
}

int signupPage() {
    char name[100][30], x, eMail[100][30], arr1[100][30], arr2[100][30], y;
    cout << "enter name: ";
    cin.getline(name[x], 30);
    cin.ignore();
    cout << "enter email: ";
    cin.getline(eMail[x], 30);
    cin.ignore();
    cout << "set password!" << "\n";
    cout << "**make sure your password should be of 8 characters**" << "\n";
    setPassword(arr1, arr2);
    cout << "you are successfully signed in!";
    return 0;
}

//  <--- ** SignUp Functionality here.... ** -->





//  <--- ** Login Functionality here.... ** --->





//   <--- ** Admin Controls Section ** --->






//   <--- ** User Controls Section ** --->