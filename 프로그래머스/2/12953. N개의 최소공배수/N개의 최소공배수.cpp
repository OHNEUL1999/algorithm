#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    int Temp = 0;
    int A = max(a, b);
    int B = min(a, b);
    
    while(A % B != 0)
    {
        Temp = A % B;
        A = B;
        B = Temp;
    }
    return B;
}

int solution(vector<int> arr) {
    int answer = arr[0];
    int GCD = 0, LCM = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        GCD = gcd(answer, arr[i]);
        int LCM = answer * arr[i] / GCD;
        answer = LCM;
    }
    
    return answer;
}