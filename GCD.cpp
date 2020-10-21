#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	// return b==0? a; gcd(b,a%b);
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);		
	}
}

int main()
{
	int a,b;
	cin>>a>>b;
	
	cout<<"GCD is : "<<gcd(a,b);
}
