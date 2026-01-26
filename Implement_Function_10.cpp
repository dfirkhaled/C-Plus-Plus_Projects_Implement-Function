/*

Created In 1/27/2026
Implement_Function_10





TrimSpecial: A function to remove special characters from a string.

Option "All+" removes everything except alphabetic letters.

Option "All" removes the special character from both ends, "Left" from the start only, and "Right" from the end only.


*/



#include <iostream>
#include <string>
using namespace std;



string TrimSpecial(string Word, char SpecialCH = '#', string option = "All+") {
    string Result = "";
    if(option == "All+") {
        for(char i : Word) {
            if(i >= 'a' && i <= 'z' || i >= 'A' && i <= 'Z') {
                Result += i;
            }
        }
        return Result;
    }

    int LeftCounter = 0;
    int RightCounter = 0;
    for(char i : Word) {
        if(i == SpecialCH) {
            LeftCounter++;
        }
        else
            break;
    }

    for(int i = (Word.size() - 1); i >= 0; i--) {
        if(Word[i] == SpecialCH) {
            RightCounter++;
        }
        else
            break;
    }

    if(option == "All") {
        for(int i = LeftCounter; i < Word.size() - RightCounter; i++) {
            Result += Word[i];
        }
        return Result;
    }

    if(option == "Left") {
        for(int i = LeftCounter; i < Word.size(); i++) {
            Result += Word[i];
        }
        return Result;
    }

    if(option == "Right") {
        for(int i = 0; i < Word.size() - RightCounter; i++) {
            Result += Word[i];
        }
        return Result;
    }



    return Result;
}




int main() {
    cout << TrimSpecial("######Khaled########", '#', "Right") << endl;
}