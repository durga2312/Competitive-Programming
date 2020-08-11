//https://atcoder.jp/contests/abc148/tasks/abc148_a
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int man()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll a1;
	cin>>a1;
	ll a2;
	cin>>a2;
	ll a3;
	cin>>a3;
	if(a1+a2+a3>=22)
	{
		cout<<"bust"<<"\n";
	}
	else
	{
		cout<<"win"<<"\n";
	}
	return 0;
}
