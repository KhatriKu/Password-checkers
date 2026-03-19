#include <check.h>
#include <string>
#include <iostream>
using namespace std;

int check::points = 0;

   

    bool check::has_uppercase(string password){
        for (char c : password) {
            if (isupper(c)) {
                return true;
            }
        }
        return false;
    }


    bool check::has_lowercase(std::string password){
        for (char c : password) {
            if (islower(c)) {
                return true;
            }
        }
        return false;
    }
    bool check::has_digit(std::string password){
        for( char c : password){
            if(isdigit(c)){
                return true;
            }
        }
        return false;
    }
    bool check::has_special_char(std::string password){
        for(char c : password){
            if(!(isalnum(c))){
                return true;
            }
        }
        return false;
    }

    void check::check_password(std::string password){
        if(password.length() >= 8){
            points+= 5;
        }
        if(has_uppercase(password)){
            points++;
        }
        if(has_lowercase(password)){
            points++;
        }
        if(has_digit(password)){
            points++;
        }
        if(has_special_char(password)){
            points++;
        }
            if(points > 5){
            cout << "Password is WEAK" << endl;
            }
            else if(points > 6){
            cout << "Password is MEDIUM" << endl;
            }
            else if(points > 8){
            cout << "Password is STRONG" << endl;
            }
            else{
                cout << "Password is VERY WEAK" << endl;
            }
    }