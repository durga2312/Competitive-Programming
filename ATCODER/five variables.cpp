#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
		vector<ll> lis;
		lis.resize(6);
		ll i;
		for(i=1;i<6;i++)
		{
			cin>>lis[i];
			if(lis[i]==0)
			{
				cout<<i<<"\n";
			}
		}
	return 0;
}
