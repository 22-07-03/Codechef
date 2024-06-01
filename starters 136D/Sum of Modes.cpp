#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define read(arr) for(auto &x: arr) cin >> x


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string binaryString;
        cin >> binaryString;
        
       
        
        // Map to count occurrences of difference between number of '0's and '1's
        map<int, int> diffCount;
        diffCount[0]++;
        
        int count0 = 0;
        int count1 = 0;
        int sumOfModes = 0;
        
        for (int i = 0; i < n; i++) {
            if (binaryString[i] == '0') {
                count0++;
            } else if(binaryString[i]=='1') {
                count1++;
            }
            
            int difference = count0 - count1;
            sumOfModes += diffCount[difference];
            diffCount[difference]++;
        }
        
         // Initial sum of the first n natural numbers
        int initialSum = n * (n + 1) / 2;
        
        cout << initialSum+ sumOfModes << endl;
    }
    
    return 0;
}
