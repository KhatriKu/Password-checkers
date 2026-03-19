#include <iostream>
#include <string>
#include "check.h"
using namespace std;


void runMenu(){
    int a = 0;
    do{
        cout << "Welcome to Password Checker" << endl;
        cout << "1. Exit" << endl;
        cout << "2. Check Password Strength" << endl;

        //check for cin failure
        if(!(cin >> a) && a != 1 && a != 2){
            cout << "Invalid input. Please enter a number that is 1 or 2." << endl;
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            continue; // skip to the next iteration of the loop
        }
        cin >> a;
        switch(a){
            case 1:
                break;
            case 2:
                string password;
                cout << "Enter your password: ";
                cin >> password;
                check::check_password(password);
                break;
        }

    }while(a != 1);
}
int main(){
    runMenu();

    return 0;
}