#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		ll x;cin>>x;
		string s;cin>>s;
		ll C=0,N=0;
		for(int i=0;i<14;++i){
			if(s[i]=='C')
				C++;
			else if(s[i]=='N')
				N++;
		}
		if(C==N)
			cout<<x*55;
		else if(C>N)
			cout<<x*60;
		else
			cout<<x*40;
		cout<<"\n";
	}
}	