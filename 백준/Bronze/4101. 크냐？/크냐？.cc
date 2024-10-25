#include <iostream>
using namespace std;

int main(){
    int a = -1, b = -1;
    
    while (true) {
        cin >> a >> b;
        if (a == 0 && a == b) {
            break;
        }
        if (a > b) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}