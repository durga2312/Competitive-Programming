//https://atcoder.jp/contests/abc145/tasks/abc145_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	string s;
	cin>>s;
	vector<char> lis;
	vector<char> alis;
	vector<char> blis;
	ll i;
	for(i=0;i<n;i++)
	{
		lis.push_back(s[i]);
	}
	if(n==1)
	{
		cout<<"No"<<"\n";
	}
	else if(n%2!=0)
	{
		cout<<"No"<<"\n";
	}
	else
	{
		ll cnt=0;
		for(i=0;i<n/2;i++)
		{
			alis.push_back(lis[i]);
		}
		for(i=n/2;i<n;i++)
		{
			blis.push_back(lis[i]);
		}
		for(i=0;i<n/2;i++)
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
		if(cnt==n/2)
		{
			cout<<"Yes"<<"\n";
		}
		else
		{
			cout<<"No"<<"\n";
		}	
	}
	return 0;
}
