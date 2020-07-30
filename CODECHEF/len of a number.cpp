#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n=0;
	cin>>n;
	ll t=0;
	ll i;
	for(i=1;i<=19;i++)
	{
		if (n!=0)
		{
			t=t+1;
			n=n/10;
			cout<<n<<"\n";
		}
		else
		{
			break;
		}
	}
	cout<<t<<"\n";
	return 0;
}
