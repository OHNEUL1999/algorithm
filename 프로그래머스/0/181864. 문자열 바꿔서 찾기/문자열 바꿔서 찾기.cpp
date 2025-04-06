#include <string>
#include <algorithm>
using namespace std;

int solution(string myString, string pat) {
    for (auto& c : myString) {
        c = (c == 'A') ? 'B' : (c == 'B' ? 'A' : c);
    }
    
    return myString.find(pat) != string::npos;
}