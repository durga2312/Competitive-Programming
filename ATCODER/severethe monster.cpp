#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll h;
	cin>>h;
	ll a;
	cin>>a;
	ll t=0;
	while(h>0)
	{
		h=h-a;
		t=t+1;
	}
	cout<<t<<"\n";
	return 0;
}
