// https://atcoder.jp/contests/abc173/tasks/abc173_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll cntac=0;
	ll cntwa=0;
	ll cnttle=0;
	ll cntre=0;
	string x;
	ll i;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		if(x=="AC")
		{
			cntac=cntac+1;	
		}
		else if(x=="WA")
		{
			cntwa=cntwa+1;
		}
		else if(x=="TLE")
		{
			cnttle=cnttle+1;
		}
		else if(x=="RE")
		{
			cntre=cntre+1;
		}
	}
	cout<<"AC "<<"x "<<cntac<<"\n";
	cout<<"WA "<<"x "<<cntwa<<"\n";
	cout<<"TLE "<<"x "<<cnttle<<"\n";
	cout<<"RE "<<"x "<<cntre<<"\n";
	return 0;
}


