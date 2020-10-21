#include<iostream>
#include<bits/stdc++.h>
#define N 1000000
#define ll long long 
using namespace std;
/////////////////////////////////////////  O(t + N ) time complexity instead of O(t*N)
void primeseive(int *p)
{
	for(int i=3; i<=N ; i+=2)
	{
		p[i]=1;
	}
	
	for(ll i=3 ; i<=N ; i+=2)
	{
		if(p[i]==1)
		{
			for(ll j=i*i; j<=N ;j=j+i)
				p[j]=0;	
		}
		
	}
	
	p[2]=1;
	p[1]=p[0]=0;
	
}

int main(){
	int p[N+1]={0};

	primeseive(p);

	int csum[N+1]={0};
	for(int i=1 ;i<=N ;i++)
	{
		csum[i]=csum[i-1]+p[i];
	}

	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<csum[b]-csum[a-1]<<endl;
	}
}
