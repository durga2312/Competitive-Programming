//https://atcoder.jp/contests/abc167/tasks/abc167_b
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
	ll k;
	cin>>k;
	ll d;
	if(a>=k)
	{
		cout<<k<<"\n";
	}
	else if((a<k)&&((a+b)>=k))
	{
		cout<<a<<"\n";
	}
	else
	{
		d=k-(a+b);
		cout<<a+(d*(-1))<<"\n";
	}
	return 0;
}
