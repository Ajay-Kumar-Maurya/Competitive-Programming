#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	string s;
	cin>>s;
 
	int l = s.length();
	int mid = l/2;
	bool flag = true;
 
	for(int i = 0;i<mid; i++)
	{
		if(s[i] != s[l-1-i])
		{
			flag = false;
			break;
		}
	}
 
	flag ? cout<<"YES" : cout<<"NO";
}
