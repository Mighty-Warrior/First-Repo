#include<iostream>
#define ll long 
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		ll pre[n+1]={0};					// memset(pre,0,sizeof(pre));
		pre[0]=1; 
		int sum=0;
		for(int i=0; i<n ; i++)
		{
			cin>>a[i];
			sum += a[i];
			sum %= n;						
			sum = (sum+n)%n;				// if -ve no. ex: -5 + 3 = -2 so to make it postitive add 5 and then take mod 
			pre[sum]++;
		}

		ll ans=0;
		for(int i=0; i<n ; i++)
		{
			ll m=pre[i];						
			 ans += m*(m-1)/2;				// mC2
		}
		cout<<ans<<endl;
	}

	return 0;
}
