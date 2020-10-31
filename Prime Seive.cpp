#include<iostream>
#include<bits/stdc++.h>
// #define N 100
#define ll long long 
using namespace std;
void primeseive(int *p, int N)
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
	int n;
	cin>>n;
	int p[n+1]={0};

	primeseive(p,n);
	
	for(int i=0 ; i<=n ;i++)
	{
		if(p[i]==1)
		cout<<" "<<i;
	}
	
}
