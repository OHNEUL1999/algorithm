#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    transform(begin(arr), end(arr), begin(arr), [k](int num) {
        return (k % 2 == 1) ? num * k : num + k;
    });
    
    return arr;
}