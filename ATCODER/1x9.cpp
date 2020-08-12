//https://atcoder.jp/contests/abc144/tasks/abc144_a
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
	if((a>9)||(b>9))
	{
		cout<<"-1"<<"\n";
	}
	else
	{
		cout<<a*b<<"\n";
	}
	return 0;
	
}
