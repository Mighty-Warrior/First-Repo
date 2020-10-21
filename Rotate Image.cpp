#include<iostream>
#include<bits/stdc++.h>
//#define N 1000000
#define ll long long 
using namespace std;

int main()
{
	int N;
	cin>>N;
	
	int a[N][N]={0};
	
	for(int i=0; i<N ;i++)
	{
		for(int j=0; j<N ; j++)
		{
			cin>>a[i][j];
		}
	}
	int temp;
	for(int i=0; i<N/2 ; i++)
	{
		for(int j=i; j<N-1-i; j++)
		{
			temp=a[i][j];
			a[i][j]=a[j][N-1-i];
			a[j][N-1-i]=a[N-1-i][N-1-j];
			a[N-1-i][N-1-j]=a[N-1-j][i];
			a[N-1-j][i]=temp;
		}
	}
	for(int i=0; i<N ;i++)
	{
		for(int j=0; j<N ; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	
	
}
