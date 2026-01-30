/*
Created In 1/30/2026
Implement_Function_15



Repeats a word multiple times and returns a vector containing all repetitions.
*/



#include <iostream>
#include <string>
#include <vector>
using namespace std;



vector<string> repeat_word(string word, int num) {
    vector<string> result;
    for(int i = 0; i < num; i++) {
        result.push_back(word);
    }
    return result;
}



int main() {
    vector<string> result = repeat_word("Hello", 5);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;;
    }
}

