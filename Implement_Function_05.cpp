/*
Created In 1/25/2026
Implement_Function_5


GetMin: Returns the smallest integer in the given vector.
Iterates through all elements to find and return the minimum value.

*/



#include <iostream>
#include <vector>
#include <string>
using namespace std;



int GetMin(const vector<int>& nums) {
    int Min = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < Min) {
            Min = nums[i];
        }
    }
    return Min;
}


int GetMax(const vector<int>& nums) {
    int Max = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > Max) {
            Max = nums[i];
        }
    }
    return Max;
}




int main() {
    cout << GetMin({6, 500, 5, 2}) << endl;
    cout << GetMax({6, 500, 5, 2}) << endl;
}
