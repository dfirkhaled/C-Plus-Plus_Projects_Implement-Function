/*
Created In 1/26/2026
Implement_Function_8



Extracts all digits from a string and converts them into an integer.

*/



#include <iostream>
using namespace std;



int Purse_int(string Word) {
    int Result = 0;
    for(char ch : Word) {
        if(ch >= '0' && ch <= '9') {
            Result = Result * 10 + (ch - '0');
        }
    }
    return Result;
}




int main() {
    cout << Purse_int("12314Khaled");
}