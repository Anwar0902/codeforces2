#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a,b;
ll visit[1005][1005]={0};
ll max1=0;
string x[1005];
ll p,q;
void dfs(ll i,ll j,ll cnt)
{
    visit[i][j]=1;
    cnt=abs(1+i-p)+abs(1+j-q);
    if(cnt>max1)
    max1=cnt;
    if((i+1)<a&&x[i+1][j]=='.'&&visit[i+1][j]==0)
    dfs(i+1,j,cnt+1);
     if((i-1)>=0&&x[i-1][j]=='.'&&visit[i-1][j]==0)
    dfs(i-1,j,cnt+1);
     if((j+1)<b&&x[i][j+1]=='.'&&visit[i][j+1]==0)
    dfs(i,j+1,cnt+1);
     if((j-1)>=0&&x[i][j-1]=='.'&&visit[i][j-1]==0)
    dfs(i,j-1,cnt+1);
    else return;
}
int main() {
	// your code goes here
	ll i,j,k,l,n,m;
	cin>>n;
	while(n--)
	{
	    max1=0;
	    cin>>b>>a;
	    /*for(i=0;i<a+2;i++)
	    {
	        x[i][0]='0';
	        x[i][b+1]='0';
	    }
	    for(i=0;i<b+2;i++)
	    {
	        x[0][i]='0';
	        x[a+1][i]='0';
	    }*/
	    ll f1=0;
	    for(i=0;i<a;i++)
	    cin>>x[i];
         for(i=0;i<a;i++)
	    {
	        for(j=0;j<b;j++)
	        {
	           // cout<<x[i][j];
	            if(visit[i][j]==0)
	            {
	                if(x[i][j]=='.')
	                {
	                    p=i,q=j;
	                    dfs(i,j,1);
	                f1++;
	                }
	            }
	        }
	        if(f1==1)
	        break;
	       // cout<<endl;
	    }
	    for(i=0;i<a;i++)
	    for(j=0;j<b;j++)
	    {
	        visit[i][j]=0;
	    }
	    cout<<"Maximum rope length is ";
	    if(f1!=1)
	    cout<<0;
	    else
	    {
	    cout<<max1-1;
	    }
	    cout<<".\n";
	    
	}
	return 0;
}
