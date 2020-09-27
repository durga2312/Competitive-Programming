//https://atcoder.jp/contests/abc147/tasks/abc147_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	ll n;
	n=s.length();
	vector<char> lis;
	ll i;
	for(i=0;i<n;i++)
	{
		lis.push_back(s[i]);
	}
	ll cnt=0;
	ll ans=0;
	vector <char> alis;
	vector <char> blis;
	if(n%2==0)
	{
		for(i=0;i<(n/2);i++)
		{
			alis.push_back(lis[i]);
		}
		for(i=n-1;i>=n/2;i--)
		{
			blis.push_back(lis[i]);
		}
		for(i=0;i<(n/2);i++)
		{
			if(alis[i]==blis[i])
			{
				cnt=cnt+1;
			}
			else
			{
				cnt=cnt;
			}
		}
		ans=(n/2)-cnt;
		cout<<ans<<"\n";
	}
	else
	{
		for(i=0;i<(n-1)/2;i++)
		{
			alis.push_back(lis[i]);
		}
		for(i=n-1;i>=(n+1)/2;i--)
		{
			blis.push_back(lis[i]);
		}
		for(i=0;i<(n-1)/2;i++)
		{
			if(alis[i]==blis[i])
			{
				cnt=cnt+1;
			}
			else
			{
				cnt=cnt;
			}
		}
		ans=(n-1)/2-cnt;
		cout<<ans<<"\n";
	}
	return 0;
}
