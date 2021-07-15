#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int price_green, price_purple;
		cin>>price_green>>price_purple;
		
		int n;
		cin>>n;

		int solved1 = 0, solved2 = 0;
		
		while(n--)
		{
			int first, second;
			cin>>first>>second;

			solved1 += first;
			solved2 += second;
		}

		int max_price = max(price_green, price_purple);
		int min_price = min(price_green, price_purple);
		int max_solved = max(solved1, solved2);
		int min_solved = min(solved1, solved2);

		int total_min_cost = max_price*min_solved + min_price*max_solved;

		cout<<total_min_cost<<endl;
	}
}
