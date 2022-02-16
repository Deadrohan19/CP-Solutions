#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define F first
#define S second
int main(){
	int n;cin>>n;
	ll arr[n];
	for(int i=0;i<n;++i)
		cin>>arr[i];
	vector<pair<ll, ll>> prize(5);
	
	for(int i=0;i<5;++i){
		int temp;cin>>temp;
		prize[i].F=temp;
		prize[i].S=0;
	}
		
	ll x=0;
	for(int i=0;i<n;++i){
		x+=arr[i];
		for(int i=4;i>=0;i--)
			if(x>=prize[i].F){
				int temp= x/prize[i].F;
				x %= prize[i].F;
				prize[i].S+= temp;
			}
	}
	for(int i=0;i<5;++i)
		cout<<prize[i].S<<" ";
	cout<<"\n"<<x;
}