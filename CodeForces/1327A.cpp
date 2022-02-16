#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		ll n,k;cin>>n>>k;
		bool flag=true;
		if((n&1 )!=(k&1))
			flag=false;
		if(n<k*k)
			flag = false;
		
		if(flag)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
}