//https://atcoder.jp/contests/abc135/tasks/abc135_a
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
	ll k;
	k=(a+b)/2;
	ll chk;
	chk=a+b;
	if(a==b)
	{
		cout<<0<<"\n";
	}
	else
	{
		if(chk%2==0)
		{
			cout<<k<<"\n";
		}
		else
		{
			cout<<"IMPOSSIBLE"<<"\n";
		}
	}
	return 0;
}
