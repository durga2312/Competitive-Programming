#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll t;
	cin>>t;
	ll i;
	for(i=1;i<=t;i++)
	{
		ll n;
		cin>>n;
		ll target;
		cin>>target;
		vector<ll> lis;
		lis.resize(n);
		bool found=false;
		ll j;
		for(j=0;j<n;j++)
		{
			cin>>lis[j];
		}
		ll low;
		ll high;
		ll mid;
		ll ans;
		low=0;
		high=n-1;
		while(low<=high)
		{
			mid=low+(high-low+1)/2;
			if(lis[mid]==target)
			{
				ans=mid;
				found=true;
				break;
			}
			else if(lis[mid]<target)
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
			
		}
		if(found==false)
		{
			ans=-1;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
