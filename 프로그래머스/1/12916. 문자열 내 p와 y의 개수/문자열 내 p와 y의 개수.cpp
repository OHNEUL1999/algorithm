#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0, y = 0;

    for(int i = 0; i < s.length(); ++i){
        if (s[i] == 'P' || s[i] == 'p') p++;
        else if (s[i] == 'Y' || s[i] == 'y') y++;
    }
    
    if(y != p) answer = false;

    return answer;
}