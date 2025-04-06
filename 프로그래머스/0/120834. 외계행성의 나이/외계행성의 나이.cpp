#include <string>
#include <algorithm>
using namespace std;

string solution(int age) {
    string age_str = to_string(age);
    string result;
    
    transform(age_str.begin(), age_str.end(), back_inserter(result),
              [](char c) -> char {
                  return 'a' + (c - '0');
              });
    
    return result;
}