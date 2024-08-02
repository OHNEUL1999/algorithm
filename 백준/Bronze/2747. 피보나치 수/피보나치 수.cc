#include <iostream>
using namespace std;

int main() {
    int a[45];
    a[0] = 0;
    a[1] = 1;

    int n;
    cin >> n;

    for(int i = 2; i <= n; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n];
    return 0;
}