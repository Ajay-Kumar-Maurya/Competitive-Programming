#include <iostream>
using namespace std;

class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
        for(int i = 0; i < sizeof_array-2; i++)
        {
            int t = arr[i];
            arr[i] = arr[i+2];
            arr[i+2] = t;
        }
    }
};


int main() {
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
        Solution obj;
        // calling function to swap the array swap elements
	    obj.swapElements(arr, sizeof_array);
	    
	    // Printing the modified array
	    for(int i = 0;i<sizeof_array;i++){
            cout << arr[i] << " ";
        }
	    
	    cout << endl;
	}
	
	return 0;
}
