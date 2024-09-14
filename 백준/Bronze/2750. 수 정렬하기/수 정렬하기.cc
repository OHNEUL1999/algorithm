#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int>nums;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < n; i++){
        cout << nums[i] << endl;
    }
}