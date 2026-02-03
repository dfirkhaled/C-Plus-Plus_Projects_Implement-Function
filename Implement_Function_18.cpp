/*
Created In 2/4/2026
Implement_Function_18




Returns a new vector with an additional item appended to the original elements.
*/




#include <iostream>
#include <string>
#include <vector>
using namespace std;



vector<string> push_item(const vector<string>& vec, string item) {
    vector<string> re_vec(vec.size() + 1);

    for(int i = 0; i < vec.size(); i++) {
        re_vec[i] = vec[i];
    }

    re_vec[vec.size()] = item;
    return re_vec;
}

int main() {
    vector<string> test = push_item({"Ahmed", "Mohamed"}, "Mostafa");
    for(string i : test) {
        cout << i << endl;
    }
}