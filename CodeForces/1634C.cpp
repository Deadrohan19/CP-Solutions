#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		if(k==1){
			cout<<"YES\n";
			for(int i=1;i<=n;++i)
				cout<<i<<"\n";
		}
		else if(n&1)
			cout<<"NO\n";
		else{
			cout<<"YES\n";
			int x=1,y=2;
			for(int j=1;j<=n;++j){
				for(int i=0;i<k;i++){
					if(j&1){
						cout<<x<<" ";
						x+=2;
					}
					else{
						cout<<y<<" ";
						y+=2;
					}
				}
				cout<<"\n";
			}
		}
	}
}