#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertion(int a[], int n)
{
	for(int i=1; i<n ; i++ )
	{
		int e=a[i];
		int j=i-1;
		while(j>=0 and a[j]>e)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=e;
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n ;i++)
	{
		cin>>a[i];
	}
	insertion(a,n);
	for(int i=0; i<n ; i++){
		cout<<a[i];
	}
}
