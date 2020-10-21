#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Bsearch(int arr[], int size, int key )
{
	
    int l=0;
    int u=size-1;
    int mid = l + (u-l)/2 ;
    while(l<=u)
    {
        if(arr[mid]==key)
        	return mid;
        else if(arr[mid]>key)
        {
            u=mid-1;
            cout<<"Upper: "<<u<<endl;
        }
        else if(arr[mid]<key){
            l=mid+1;
            cout<<"Lower: "<<l<<endl;
        }
        mid = l + (u-l)/2 ;
    }
}
int main() {
    int size;
    cout<<"enter size:";
    cin>>size;
    int a[size];
    for(int i=0; i<size ; i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<"Ans: "<<Bsearch(a,size,key);
}

