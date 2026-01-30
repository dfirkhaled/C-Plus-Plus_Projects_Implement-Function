/*
Created In 1/30/2026
Implement_Function_13




A utility function that joins elements of a string vector into one formatted string with a custom separator.
*/



#include <iostream>
#include <string>
#include <vector>
using namespace std;



string join_strings(const vector<string>& vec, string sep = ", ") {
    string result;
    for(int i = 0; i < vec.size(); i++) {
        result += vec[i];
        if(i != vec.size() - 1) {
            result += sep;
        }
    }
    return result;
}



int main() {
    cout << join_strings({"Hello", "World", "Project"});
}
