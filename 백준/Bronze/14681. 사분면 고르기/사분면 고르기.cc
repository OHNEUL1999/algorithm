#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0;
    
    cin >> a;
    cin >> b;
    
    if (a > 0) {
        if (b > 0) {
            cout << 1;
            return 0;
        } 
        cout << 4;
        return 0;
    } else {
        if (b > 0) {
            cout << 2;
            return 0;
        }
        cout << 3;
        return 0;        
    }
}