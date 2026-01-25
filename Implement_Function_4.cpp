/*
Created In 1/25/2026
Implement_Function_4


Reverses a given string and returns the reversed result.

*/


#include <iostream>
#include <string>
using namespace std;

// 12345
string Reverse(string Word) {
    string Result = "";
    for (int i = Word.size() - 1; i >= 0; i--) {
        Result += Word[i];
    }
    return Result;
}

int main() {
    // string YourVariable = Reverse("Your Word!");
}
