#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	int arr[n];

	for(int i = 0; i<n; i++)
		cin>>arr[i];
	
	int t = arr[n-1];

	(t%10 == 0) ? cout<<"Yes" : cout<<"No";
}
