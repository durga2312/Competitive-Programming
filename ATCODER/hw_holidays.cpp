//https://atcoder.jp/contests/abc163/tasks/abc163_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll m;
	cin>>m;
	vector <ll> p;
	p.resize(m);
	ll i;
	for(i=0;i<m;i++)
	{
		cin>>p[i];
		n=n-p[i];
	}
	if(n==0)
	{
		cout<<"0"<<"\n";
	}
	else if(n<0)
	{
		cout<<"-1"<<"\n";
	}
	else
	{
		cout<<n<<"\n";
	}
	
	return 0;
}
