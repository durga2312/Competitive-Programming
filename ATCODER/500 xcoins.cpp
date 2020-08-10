//https://atcoder.jp/contests/abc150/tasks/abc150_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll k;
	cin>>k;
	ll x;
	cin>>x;
	if((k*500)>=x)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
	}
	return 0;
}
