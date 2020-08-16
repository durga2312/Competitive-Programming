//https://atcoder.jp/contests/abc166/tasks/abc166_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll k;
	cin>>k;
	vector<bool> ans;
	ans.resize(n);
	ll cnt=0;
	ll i;
	for(i=1;i<=k;i++)
	{
		ll snack;
		cin>>snack;
		vector<ll> lis;
		lis.resize(snack);
	
		ll j;
		for(j=0;j<snack;j++)
		{
			cin>>lis[j];
			ans[lis[j]-1]=true;
		}
	}
	for(i=0;i<n;i++)
	{
		if(ans[i]==false)
		{
			cnt=cnt+1;
		}
	}
	cout<<cnt<<"\n";
	return 0;
}
