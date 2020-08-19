//https://atcoder.jp/contests/abc159/tasks/abc159_b
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin>>s;
	ll n;
	n=s.length();
	bool palin=false;
	vector <char> revs;
	ll i;
	for(i=n-1;i>=0;i--)
	{
		revs.push_back(s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(s[i]==revs[i])
		{
			palin=true;
		}
		else
		{
			palin=false;
			break;
		}
	}
	bool sml1=false;
	bool sml2=false;
	if(palin==true)
	{
		vector <char> rev1;
		for(i=0;i<(n-1)/2;i++)
		{
			rev1.push_back(s[i]);
		}
		ll x;
		x=rev1.size();
		vector <char> rev11;
		for(i=x-1;i>=0;i--)
		{
			rev11.push_back(s[i]);
		}
		for(i=0;i<x;i++)
		{
			if(rev1[i]==rev11[i])
			{
				sml1=true;
			}
			else
			{
				sml1=false;
				break;
			}
		}
		vector <char> rev2;
		for(i=(n+1)/2;i<n;i++)
		{
			rev2.push_back(s[i]);
		}
		ll y;
		y=rev2.size();
		vector <char> rev22;
		for(i=y-1;i>=0;i--)
		{
			rev22.push_back(s[i]);
		}
		for(i=0;i<y;i++)
		{
			if(rev2[i]==rev22[i])
			{
				sml2=true;
			}
			else
			{
				sml2=false;
				break;
			}
		}
		if((sml1==true)&&(sml2==true))
		{
			cout<<"Yes"<<"\n";
		}
		else
		{
			cout<<"No"<<"\n";
		}
	}
	else
	{
		cout<<"No"<<"\n";
	}
	
	return 0;
}
