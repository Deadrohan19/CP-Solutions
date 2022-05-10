#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double; 

int main(){
	int t;cin>>t;
	while(t--){
		ll x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		ll ans=0;
		if(y1==y2 && y1>=y3)
			ans= abs(x2-x1);
		else if(y2==y3 && y2>=y1)
			ans = abs(x3-x2);
		else if(y3==y1 && y3>=y2)
			ans= abs(x3-x1);
		cout<<ans<<"\n";
	}
}