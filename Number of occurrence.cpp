#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int count(int arr[], int n, int x) {
	    int s = 0, e = n-1;
	    int first = -1,last = -1;
	    
	    int mid;
	    
	    while(s <= e)
	    {
	        mid = (s+e)/2;
	        
	        if(arr[mid] == x)
	        {
	            first = mid;
	            e = mid-1;
	        }else if(arr[mid] > x)
	        {
	            e = mid-1;
	        }else
	        {
	            s = mid+1;
	        }
	    }
	    
	    s = 0; e = n-1;
	    
	    while(s <= e)
	    {
	        mid = (s+e)/2;
	        
	        if(arr[mid] == x)
	        {
	            last = mid;
	            s = mid+1;
	        }else if(arr[mid] > x)
	        {
	            e = mid-1;
	        }else
	        {
	            s = mid+1;
	        }
	    }
	    
	    int occurrence = ((first == -1) && (last == -1)) ? 0 : last - first + 1;
	    
	    return occurrence;
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
