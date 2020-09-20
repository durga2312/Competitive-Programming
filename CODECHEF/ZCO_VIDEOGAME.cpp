//https://www.codechef.com/ZCOPRAC/problems/ZCO14001
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin>>n;
	ll h;
	cin>>h;
	vector <ll> lis;
	lis.resize(n);
	ll i;
	bool ans=false;
	for(i=0;i<n;i++)
	{
		cin>>lis[i];
	}
	ll x;
	cin>>x;
	i=0;
	while(x>0)
	{
			if(x==1)
			{
				if(i==0)
				{
					i=i;
				}
				else
				{
					i=i-1;
				}
			}
			else if(x==2)
			{
				if(i==(n-1))
				{
					i=i;
				}
				else
				{
					i=i+1;	
				}
			}
			else if(x==3)
			{
				if((lis[i]==0)||(ans==true))
				{
					lis[i]=lis[i];
					ans=ans;
				}
				else
				{					
					lis[i]=lis[i]-1;
					ans=true;
				}
			}
			else
			{
				if((lis[i]==h)||(ans==false))
				{
					lis[i]=lis[i];
					ans=ans;
				}
				else
				{
					lis[i]=lis[i]+1;
					ans=false;	
				}	
			}
		cin>>x;
	}
	for(i=0;i<n;i++)
	{
		cout<<lis[i]<<"\n";
	}
	return 0;
}
