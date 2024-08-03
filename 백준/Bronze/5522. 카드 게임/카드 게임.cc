#include <iostream>
using namespace std;

int main() {
    int sum = 0, temp;
    for(int i = 0; i < 5; i++) {
        cin >> temp;
        sum += temp;
    }
    cout << sum;
    return 0;
}