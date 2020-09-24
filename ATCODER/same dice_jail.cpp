//https://atcoder.jp/contests/abc179/tasks/abc179_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	bool ans=false;
	ll i;
	vector<ll> lis1;
	lis1.resize(n);
	vector<ll> lis2;
	lis2.resize(n);
	for(i=0;i<n;i++)
	{
		cin>>lis1[i];
		cin>>lis2[i];
	}
	ll cnt=0;
	for(i=0;i<n;i++)
	{
		if(lis1[i]==lis2[i])
		{
			cnt=cnt+1;
			if(cnt>=3)
			{
				ans=true;
			}
			else
			{
				ans=ans;
			}
    	}
		else
		{
			cnt=0;
		}
	}
	if(ans==true)
	{
		cout<<"Yes"<<"\n";
		
	}
	else
	{
		cout<<"No"<<"\n";
	}
	return 0;
}
