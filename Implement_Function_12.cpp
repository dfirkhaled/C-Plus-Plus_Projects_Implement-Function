/*
Created In 1/30/2026
Implement_Function_12



Checks if a given element exists in the vector.
*/



#include <iostream>
#include <vector>
using namespace std;


bool Contains(const vector<int>& arr, int Element) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == Element) {
            return true;
        }
    }
    return false;
}




int main() {
    cout << Contains({1, 15, 10}, 15);
}