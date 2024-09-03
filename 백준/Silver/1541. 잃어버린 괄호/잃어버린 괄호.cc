#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

/*
- 기준으로 분리하고, -나오기 전까지만 더하면 최솟값 (-후의 값들은 다 더한 후, result에서 빼기)
*/

int main() {
    string input;
    cin >> input;
    
    vector<string> parts;
    stringstream ss(input);
    string temp;
    
    while (getline(ss, temp, '-')) {
        parts.push_back(temp);
    }
    
    int result = 0;
    
    // 첫 번째 덩어리 처리
    stringstream first_part(parts[0]);
    int sum_first_part = 0;
    while (getline(first_part, temp, '+')) {
        sum_first_part += stoi(temp);
    }
    result += sum_first_part;
    
    // 그 이후 덩어리 처리 (모두 더한 후 빼기)
    for (int i = 1; i < parts.size(); ++i) {
        stringstream other_parts(parts[i]);
        int sum_other_parts = 0;
        while (getline(other_parts, temp, '+')) {
            sum_other_parts += stoi(temp);
        }
        result -= sum_other_parts;
    }
    
    cout << result << endl;
    
    return 0;
}
