/*
Created In 1/25/2026
Implement_Function_4.1


Reverses a given string and returns the reversed result.
Version 4.1 adds an option to remove spaces while reversing the string.

*/


#include <iostream>
#include <string>
using namespace std;


string Reverse(string Word, bool Sp_Del = false) {
    string Result = "";
    for (int i = Word.size() - 1; i >= 0; i--) {
        if (Word[i] == ' ' && Sp_Del == true) {
            continue;
        }
        Result += Word[i];
    }
    return Result;
}

int main() {
    cout << Reverse("Your Word!", true);
}
