#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[9], sum = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int fake1 = -1, fake2 = -1;
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - a[i] - a[j] == 100) {
                fake1 = i;
                fake2 = j;
                break;
            }
        }
        if (fake1 != -1) break;
    }

    // sort 위해 result에 fake1, fake2아닌 것 넣기
    int result[7], index = 0;
    for (int i = 0; i < 9; i++) {
        if (i != fake1 && i != fake2) {
            result[index++] = a[i];
        }
    }

    sort(result, result + 7);
    for (int i = 0; i < 7; i++) {
        cout << result[i] << endl;
    }
    
    return 0;
}