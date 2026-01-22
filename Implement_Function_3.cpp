/*
Created In 1/22/2026
Implement_Function_3



Returns the input string left-padded with a fill character to reach the specified width

*/





#include <iostream>
#include <string>
using namespace std;


string zFill(string Str, int Width, string Fill = "0") {
    if(Str.size() < Width) {
        string Result = "";
        for (int i = 0; i < (Width - Str.size()); i++) {
            Result += Fill;
        }
        Result += Str;
        cout << Result;
        return Result;
    }
}

// int main() {
//     zFill("Your String", Your Number of Width, "Your Sep || By Defualt It's = {0}");
// }