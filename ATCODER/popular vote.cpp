//https://atcoder.jp/contests/abc161/tasks/abc161_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll m;
	cin>>m;
	vector<ll> lis;
	lis.resize(n);
	ll sum=0;
	//ll min=0;
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>lis[i];
		sum=sum+lis[i];
	}
	sort(lis.begin(),lis.end());
	//min=(1/(4*m))*sum;
	vector<ll> sel;
	for(i=n-1;i>=0;i--)
	{
		if(lis[i]*4*m>=sum)
		{
			sel.push_back(lis[i]);	
		}
	}
	ll x;
	x=sel.size();
	if(x>=m)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
	}
	return 0;
}
