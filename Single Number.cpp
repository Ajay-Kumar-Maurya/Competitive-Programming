#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int getSingle(int arr[], int n) {
	    int XOR = arr[0];
	    for(int i = 1; i < n; i++)
	        XOR ^= arr[i];
    
	   return XOR;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getSingle(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
