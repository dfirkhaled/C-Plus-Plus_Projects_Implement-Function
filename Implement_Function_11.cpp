/*
Created In 1/30/2026
Implement_Function_11



// Checks if the first letter of every word in a string is capitalized.

*/





#include <iostream>
#include <string>
using namespace std;


bool AreWordsCapitalized(string Word) {
    bool newWord = true;
    for(char i : Word) {
        if(i == ' ') {
            newWord = true;
        }

        else if(newWord) {
            if(i >= 'a' && i <= 'z') {
                return false;
            }
            else
                newWord = false;
        }
    }
    return true;
}


int main() {
    cout << AreWordsCapitalized("Hello World") << endl;
}