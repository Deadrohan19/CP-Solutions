#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		if(n&1){
			cout<<"YES\n";
			continue;
		}
		int cnt0=0,cnt1=0;
		for(int i=0;i<n;++i)
			if(s[i]=='0')
				cnt0++;
			else
				cnt1++;
		if(cnt1%2==0 || cnt1==cnt0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}