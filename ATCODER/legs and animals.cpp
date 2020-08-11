//https://atcoder.jp/contests/abc170/tasks/abc170_b
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll x;
	cin>>x;
	ll y;
	cin>>y;
	ll c;
	ll t;
	t=(y-(2*x))/2;
	c=((4*x)-y)/2;
	if(c<0||t<0)
	{
		cout<<"No"<<"\n";
	}
	else if((c+t==x)&&((2*c)+(4*t)==y))
	{
		cout<<"Yes"<<"\n";
	}	
	else
	{
		cout<<"No"<<"\n";
	}
	return 0;
}
