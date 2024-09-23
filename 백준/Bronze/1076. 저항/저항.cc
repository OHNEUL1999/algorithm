#include <iostream>
#include <string>
#include <cmath> // pow(), 제곱
using namespace std;

enum color{
    black = 0,
    brown,
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    grey,
    white
};

int getColorValue(string colorName) {
    if (colorName == "black") return black;
    if (colorName == "brown") return brown;
    if (colorName == "red") return red;
    if (colorName == "orange") return orange;
    if (colorName == "yellow") return yellow;
    if (colorName == "green") return green;
    if (colorName == "blue") return blue;
    if (colorName == "violet") return violet;
    if (colorName == "grey") return grey;
    if (colorName == "white") return white;
    return -1;
}

int main() {
    string col1, col2, col3;
    long long result;

    cin >> col1 >> col2 >> col3;
    int first = getColorValue(col1);
    int second = getColorValue(col2);
    int multiplier = getColorValue(col3);

    result = (first * 10 + second) * pow(10, multiplier);

    cout << result;

    return 0;
}