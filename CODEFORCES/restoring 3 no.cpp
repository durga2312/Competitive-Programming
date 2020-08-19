//https://codeforces.com/problemset/problem/1154/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector <ll> lis;
	lis.resize(4);
	ll i;
	for(i=0;i<4;i++)
	{
		cin>>lis[i];
	}
	sort(lis.begin(),lis.end());
	ll a;
	ll b;
	ll c;
	a=lis[1]+lis[2]-lis[3];
	b=lis[0]+lis[2]-lis[3];
	c=lis[3]-lis[2];
	cout<<a<<"\n";
	cout<<b<<"\n";
	cout<<c<<"\n";
	return 0;
}
