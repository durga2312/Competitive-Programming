//https://atcoder.jp/contests/abc143/tasks/abc143_a
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
	if(b>=a)
	{
		cout<<"0"<<"\n";
	}
	else if((2*b)>=a)
	{
		cout<<"0"<<"\n";
	}
	else
	{
		c=a-(2*b);
		cout<<c<<"\n";
	}
	return 0;
}
