/*
Created In 1/27/2026
Implement_Function_9



Checks if a given string consists entirely of numeric digits (0-9) and returns true if so, false otherwise.

*/


#include <iostream>
#include <string>
using namespace std;



bool Num(string st) {
    for(char i : st) {
        if(i >= '0' && i <= '9') {
            continue;
        }
        else {
            return false;
        }
    }
    return true;
}


int main() {
    cout << boolalpha;
    cout << Num("12512s891") << endl;
}