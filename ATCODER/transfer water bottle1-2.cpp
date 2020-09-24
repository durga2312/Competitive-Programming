//https://atcoder.jp/contests/abc136/tasks/abc136_a
#include<bits/stdc++.h>
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
	ll sp;
	sp=a-b;
	ll lef;
	lef=c-sp;
	if(lef>=0)
	{
		cout<<lef<<"\n";
	}
	else
	{
		cout<<0<<"\n";
	}
	return 0;
}
