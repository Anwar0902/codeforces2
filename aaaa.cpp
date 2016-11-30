#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll i,j,k,l,n,m,t;
	cin>>t;
	while(t--)
	{
		ll f=0;
		cin>>j>>k;
		ll x,y,p,q,g,h;
		x=log(j)/log(2);
		y=log(k)/log(2);
		p=pow(2,x);
		q=pow(2,y);
		if(p==j||q==k)
		{
			cout<<"Y\n";
			continue;
		}
		if(j>=k)
		{
			for(i=y+1;i<65;i++)
			{
				h=pow(2,i);
				if((h-k)%j==0)
				{
					cout<<h<<" "<<(h-k)/j;
					cout<<"Y\n";
					f=1;
					break;
				}
			}
		}
		else
		{
			for(i=x+1;i<65;i++)
			{
				h=pow(2,i);
				if((h-j)%k==0)
				{
					cout<<"Y\n";
					f=1;
					break;
				}
			}
		}
		if(f==0)
		cout<<"N\n";
	}
}
