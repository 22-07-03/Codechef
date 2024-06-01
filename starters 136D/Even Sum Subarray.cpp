#include <iostream>
#include <vector>
using namespace std;

#define ff(i, n) for (int i = 0; i < n; i++)
#define ffs(i, s, n) for (int i = s; i < n; i++)

int solve(vector<int>& vec, int& n) {
    int numofelements = 0;
    ff(i, n) {
        int currentsum = 0;
        ffs(j, i, n) {
            currentsum += vec[j];
            if (currentsum % 2 == 0) {
                int sizeofsubarray = j - i + 1;
                numofelements = max(numofelements, sizeofsubarray);
            }
        }
    }
    return numofelements;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        ff(i, n) {
            cin >> vec[i];
        }
        int numofelements = solve(vec, n);
        cout << numofelements << endl;
    }
    return 0;
}
