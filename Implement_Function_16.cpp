/*
Created In 1/30/2026
Implement_Function_16



Generates a vector of integers from num1 to num2; includes num2 if inclusive is true.
*/



#include <iostream>
#include <vector>
using namespace std;



vector<int> range_vec(int num1, int num2, bool inclusive = true) {
    vector<int> result;
    int num = inclusive? num2 : num2-1;
    for(int i = num1; i <= num; i++) {
        result.push_back(i);
    }
    return result;
}


int main() {
    vector<int> result = range_vec(5, 12, true);
    for(int i : result) {
        cout << i << endl;
    }
}