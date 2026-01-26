/*
Created In 1/26/2026
Implement_Function_7



Converts a string to uppercase, lowercase, or switches the case of each character.

*/




#include <iostream>
#include <string>
using namespace std;



string UpperCase(string Word) {
    string Result;
    for (char ch : Word) {
        if(ch >= 'a' && ch <= 'z') {
            ch -= 32;
        }
        Result += ch;
    }
    return Result;
}

string LowerCase(string Word) {
    string Result;
    for (char ch : Word) {
        if(ch >= 'A' && ch <= 'Z') {
            ch += 32;
        }
        Result += ch;
    }
    return Result;
}


string SwitchCase(string Word) {
    string Result;
    for (char ch : Word) {
        if(ch >= 'a' && ch <= 'z') {
            ch -= 32;
            Result += ch;
            continue;
        }

        else if(ch >= 'A' && ch <= 'Z') {
            ch += 32;
            Result += ch;
            continue;
        }
        Result += ch;
    }
    return Result;
}




int main() {
    cout << LowerCase("Khaled") << endl;
    cout << UpperCase("khaled") << endl;
    cout << SwitchCase("KhA5lEd") << endl;
}