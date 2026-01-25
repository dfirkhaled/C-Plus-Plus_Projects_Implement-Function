/*

Implement Function Number 1
Created In 1/22/2026

*/

#include <iostream>
#include <string>
using namespace std;


int Count(char Sub_String, string String) {
    int Result = 0;
    for (int i = 0; i < String.size(); i++) {
        if(Sub_String == String[i]) {
            Result++;
        }
    }
    cout << "Result: " << Result;
    return Result;
}


// int main() {
//     Count('Your Char', "Your String");

// }
