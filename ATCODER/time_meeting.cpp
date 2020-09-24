//https://atcoder.jp/contests/abc177/tasks/abc177_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll d;
	cin>>d;
	ll t;
	cin>>t;
	ll s;
	cin>>s;
	ll ts=t*s;
	if(d<=ts)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
	}
	return 0;
}
