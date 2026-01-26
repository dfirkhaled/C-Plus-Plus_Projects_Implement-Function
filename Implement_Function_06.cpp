/*
Created In 1/26/2026
Implement_Function_6



Applies a specified arithmetic operation (+, -, *) to a vector of integers.

*/


#include <iostream>
#include <vector>
using namespace std;





int SumVec(const vector<int>& Vec, char operation = '+') {
    int Result = (operation == '*') ? 1 : Vec[0];
    int Start = (operation == '*') ? 0 : 1;


    for(int num = Start; num < Vec.size(); num++) {
        switch(operation) {
            case '+': Result += Vec[num]; break;
            case '-': Result -= Vec[num]; break;
            case '*': Result *= Vec[num]; break;
        }
    }
    return Result;
}




int main() {
    cout << SumVec({1, 5, 10, 2}, '-');
}
