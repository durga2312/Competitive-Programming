#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll k;
	cin>>k;
	ll a;
	cin>>a;
	ll b;
	cin>>b;
	ll n=0;
	n=((b-a)/k);
	if(n>=1)
	{
		cout<<"OK"<<"\n";
	}
	else
	{
		cout<<"NG"<<"\n";
	}
	return 0;
}
