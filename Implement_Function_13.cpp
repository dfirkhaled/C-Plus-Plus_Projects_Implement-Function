/*
Created In 1/30/2026
Implement_Function_13





Rounding functions for positive numbers only.
Round returns the nearest integer, Floor returns the largest integer not greater than the number,
Ceil returns the smallest integer not less than the number.


*/



#include <iostream>
using namespace std;


int Round(double Num) {
    return Num + 0.5;
}



int Floor(double Num) {
    return Num;
}

int Ceil(double Num) {
    int num = Num;
    if(num == Num) return num;
    return Num + 1;
}




int main() {
    cout << Round(5.4) << endl;
    cout << Floor(5.1) << endl;
    cout << Ceil(5.0);
}