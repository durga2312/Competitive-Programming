//https://atcoder.jp/contests/abc164/tasks/abc164_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll a;
	cin>>a;
	ll b;
	cin>>b;
	ll c;
	cin>>c;
	ll d;
	cin>>d;
	ll cnt1=0;
	ll cnt2=0;
	while(a>0)
	{
		a=a-d;
		cnt1=cnt1+1;
	}
	while(c>0)
	{
		c=c-b;
		cnt2=cnt2+1;
	}
	if(cnt1>cnt2)
	{
		cout<<"Yes"<<"\n";
	}
	else if(cnt1==cnt2)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
	}
	return 0;
}
