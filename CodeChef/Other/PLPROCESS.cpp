#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll arr[n],PS[n],SS[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		PS[0]=arr[0];
		SS[n-1]=arr[n-1];
		for(int i=1;i<n;++i)
			PS[i]=arr[i]+PS[i-1];
		for(int i=n-2;i>0;i--)
			SS[i]=arr[i]+SS[i+1];
		if(n==1)
			cout<<arr[0]<<"\n";
		else{
			ll ans=LLONG_MAX;
			for(int i=0;i<n-1;++i)
				ans = min(ans,max(PS[i],SS[i+1]));
			cout<<ans<<"\n";
		}
	}
}