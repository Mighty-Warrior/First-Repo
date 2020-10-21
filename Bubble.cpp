#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int &p , int &q)
{
	int temp;
	temp = p;
	p=q;
	q=temp;
}

void Bubble(int a[], int n)
{
	int size=n;
	for(int i=1; i<=size-1 ; i++)
	{
		for(int j=0; j<=size-2; j++)
		{
			if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
		}
	}	
}

void Selection(int a[], int size)
{
	for(int i=0; i<=size-2 ; i++)
	{
		int min=i;
		for(int j=i+1; j<=size-1; j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(i!=min)
		swap(a[i],a[min]);
	}	
}


int main()
{
	int size;
	cout<<"Size: ";
	cin>>size;
	int arr[size];
	
	cout<<"Enter array: ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
//	Bubble(arr,size);
	Selection(arr,size);	
	for(int i=0; i<size; i++)
	{
		cout<<" "<<arr[i];
	}
	
}
