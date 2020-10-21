#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_key(int a[],int n, int key)
{
	int s=0;
	int e =n-1;
	int mid = (s+e)/2;
	if(mid==key)
	{
		return mid;
	}
	else if(a[s]<a[mid])
	{
		if(key<a[mid])
		{
			e = mid-1;
		}
		else
			s = mid+1;
	}
	else
	{
		if(key>mid){
			s=mid+1;
		}
		else
			e= mid-1;
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n ; i++)
	{
		cin>>a[i];
	}	
	int key;
	cin>>key;
	
	cout<<find_key(a,n,key);
}
