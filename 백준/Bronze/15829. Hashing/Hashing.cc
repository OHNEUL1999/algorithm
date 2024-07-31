#include<iostream>
#include<string>
using namespace std;

int main() {
    int L;
    string str;
    long long hash = 0;
    long long r = 31;
    long long M = 1234567891;

    cin >> L;
    cin >> str;

    long long power = 1;
    for(int i = 0; i < L; i++) {
        hash = (hash + (str[i] - 'a' + 1) * power) % M;
        power = (power * r) % M;
    }

    cout << hash;

    return 0;
}
