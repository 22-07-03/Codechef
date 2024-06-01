#pragma GCC optimize("03")
#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    int steps = 0;
    
    for (int i = 0; i < 4; i++) {
        if (s[i] == '1')
            steps++;
    }
    
    if (steps == 0)
        cout << "0" << endl;
    else if (steps == 1)
        cout << "11" << endl;
    else if (steps == 2 && (s[0] == '1' && s[1] == '1' || s[2] == '1' && s[3] == '1'))
        cout << "21" << endl;
    else if (steps == 3)
        cout << "231" << endl;
    else if (steps == 4)
        cout << "441" << endl;
    else
        cout << "121" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
