#include <iostream>
using namespace std;

int plusEquals(int x, int y, int N) {
    int count = 0;
    while (x <= N && y <= N) {
        if (x < y) {
            x += y;
        } else {
            y += x;
        }
        count++;
    }
    cout << count << endl;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int A, B, N;
        cin >> A >> B >> N;
        plusEquals(A, B, N);
    }
    return 0;
}