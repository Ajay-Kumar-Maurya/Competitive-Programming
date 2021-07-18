#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

class Solution{
    public:
    long long getNumber(string s)   // I created utility function that converts string to integer
    {
        long long num = 0;
        int l = s.length();
        for(int i = 0; i < l; i++)
        {
            int digit = s[i] - '0';
            num = 10*num + digit;
        }
        return num;
    }
    
    long long getNextEven(string x)
    {
        /*
        If n is number of digits, then n! permutation are possible.
        If n is number, then log10(n) will be digits. Hence log(n)! will be permutations.
        */
        
        // next_permutation() works for string and array both.
        
        string s = x;
        long long save = getNumber(x);
        
        long long nextNum = -1,temp;
        
        while(next_permutation(x.begin(),x.end()))
        {
            temp = getNumber(x);
            if(temp%2 == 0)
            {
                nextNum = temp;
                break;
            }
        }
        
        return nextNum;
    }
};

int main() 
{
	int t;
	cin >> t;
	while(t--){
    	string x;
    	cin >> x;
    	Solution ob;
        cout<< ob.getNextEven(x) <<endl;
	}
	return 0;
}
