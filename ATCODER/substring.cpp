//https://atcoder.jp/contests/abc177/tasks/abc177_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	string t;
	cin>>t;
	ll n;
	n=s.length();
	ll m;
	m=t.length();
	vector<char> slis;
	vector <char> tlis;
	ll i;
	for(i=0;i<n;i++)
	{
		slis.push_back(s[i]);
	}
	for(i=0;i<m;i++)
	{
		tlis.push_back(t[i]);
	}
	ll cnt=0;
	vector<ll> lis;
	for(i=0;i<n+1-m;i++)
	{
		ll j;
		cnt=0;
		for(j=0;j<m;j++)
		{
			if(tlis[j]==slis[i+j])
			{
				cnt=cnt+1;
			}
			else
			{
				cnt=cnt;
			}
		}
		lis.push_back(cnt);
	}
	sort(lis.begin(),lis.end());
	ll x;
	x=lis.size();
	ll ans;
	ans=m-lis[x-1];
	cout<<ans<<"\n";
	return 0;
}
