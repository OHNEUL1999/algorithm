#include <iostream>
#include <string>
using namespace std;

const string patterns[8] = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};
const char letters[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

int main(){
    int N;
    cin >> N;
    string messages;
    cin >> messages;

    string result = "";

    for(int i = 0; i < N; i++) {
        string message = messages.substr(6 * i, 6);
        bool found = false;

        for (int k = 0; k < 8; ++k) {
            int diff = 0;
            for (int j = 0; j < 6; ++j) {
                if (message[j] != patterns[k][j]) {
                    ++diff;
                }
            }
            if (diff <= 1) {
                result += letters[k];
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << i + 1;
            return 0;
        }
        
    }

    cout << result;

    return 0;
}