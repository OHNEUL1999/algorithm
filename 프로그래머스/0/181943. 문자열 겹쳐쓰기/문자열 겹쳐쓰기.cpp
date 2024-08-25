#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    for (int i = 0; i < overwrite_string.length(); i++) {
        my_string[s + i] = overwrite_string[i];
    }

    return my_string;
}