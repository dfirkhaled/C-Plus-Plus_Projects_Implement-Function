/*
Created In 1/30/2026
Implement_Function_17



Checks if the first word of a string matches a given test string.
*/



#include <iostream>
#include <string>
using namespace std;



bool string_starts_with(string word, string test) {
    string first_word = "";
    if(word.size() < test.size()) return false;
    for(char i : word) {
        if(i == ' ') {
            break;
        }
        else
            first_word += i;
    }

    if(first_word == test) return true;
    else return false;
}



int main() {
    cout << boolalpha;
    cout << string_starts_with("Hello World", "Hello") << endl;   // true
    cout << string_starts_with("Hello World", "World") << endl;   // false
    cout << string_starts_with("Hel", "Hello") << endl;           // false
}