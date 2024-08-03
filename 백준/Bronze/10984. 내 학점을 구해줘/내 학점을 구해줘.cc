#include <iostream>
using namespace std;

int main() {
    int semester, n;
    cin >> semester;
    for (int i = 0; i < semester; i++)
    {
        cin >> n;
        int sc = 0;
        float sg = 0.0;
        for (int j = 0; j < n; j++)
        {
            int c;
            float g;
            cin >> c >> g;
            sc += c;
            sg += c * g;
        }
        cout << sc << " " << sg / sc << endl;        
    }
    
    return 0;
}
