#include <iostream>
#include <vector>

using namespace std;

int main() {
    int price;
    cin >> price;

    int change = 1000 - price;
    vector<int> coins = {500, 100, 50, 10, 5, 1};
    int count = 0;

    for (int coin : coins) {
        count += change / coin;
        change %= coin;
    }

    cout << count << endl;
    return 0;
}
