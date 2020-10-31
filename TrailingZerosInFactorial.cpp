#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	int s1=0;
	int p=5;
	while((n/p)>=0)
	{
		s1++;
		p=p*5;
	}
	cout<<s1;

}
