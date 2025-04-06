#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> arr) {
    // double answer = 0, sum = 0;
    // for(int i = 0; i < arr.size(); i++) {
    //     sum += arr[i];
    // }
    // answer = sum / arr.size();
    // return answer;
    
    double answer = 0;
    
    double sum = accumulate(arr.begin(), arr.end(), 0.0);
    answer = sum / arr.size();
    
    return answer;
}