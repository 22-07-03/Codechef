#include <iostream>
#include <cstdlib> // for abs function
using namespace std;

int main() {
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        int n = (x - y);
        
        if (n >= 10) {
            cout << "0" << endl;
        } else {
            int k = 10 - n;
            k = abs(k);
            
            if (k % 3 == 0) {
                k = k / 3;
                cout << k << endl;
            } else {
                cout << (int)k / 3 + 1 << endl;
            }
        }
    }
    return 0;
}
