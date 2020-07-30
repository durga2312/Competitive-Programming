#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	freopen("bcount.in","r",stdin);
	freopen("bcount.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll q;
	cin>>q;
	vector<ll> a;
	a.resize(n);
	ll cnt1=0;
	ll cnt2=0;
	ll cnt3=0;
	ll i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<q;i++)
	{
		ll b;
		ll c;
		cin>>b;
		cin>>c;
		ll j;
		for(j=b-1;j<=c-1;j++)
		{
			if (a[j]==1)
			{
				cnt1=cnt1+1;	
			}
			else if(a[j]==2)
			{
				cnt2=cnt2+1;
			}
			else
			{
				cnt3=cnt3+1;
			}
		}
		cout<<cnt1<<" ";
		cout<<cnt2<<" ";
		cout<<cnt3<<"\n";
		cnt1=0;
		cnt2=0;
		cnt3=0;
	}		
	return 0;
}  
