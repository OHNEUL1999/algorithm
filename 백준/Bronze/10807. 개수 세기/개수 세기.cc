#include <iostream>
using namespace std;

int main() {
    int a, *b, c, num = 0;
    cin >> a;
    b = new int[a];
    for(int i = 0; i < a; i++) {
        cin >> b[i];
    }
    cin >> c;

    for(int i = 0; i < a; i++) {
        if (b[i] == c)
        {
            num += 1;
        }
    }
    cout << num;

    delete[] b;
    return 0;
}
