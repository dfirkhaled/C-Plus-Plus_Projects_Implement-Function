/*

Implement Function Number 2
Created in 1/22/2026


Prints the given string a specified number of times, each on a new line :)

*/



#include <iostream>
#include <string>
using namespace std;



void StrRepeater(string Str, int Num) {
    for(int i = 0; i < Num; i++) {
        cout << Str << endl;
    }
}


// int main() {
//     StrRepeater("Your Word", Your Number);
// }