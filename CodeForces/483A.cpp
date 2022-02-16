#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll l,r;cin>>l>>r;
	if((r-l)>1 && !(l&1))
		cout<<l<<" "<<l+1<<" "<<l+2;
	else if((r-l)>2)
		cout<<l+1<<" "<<l+2<<" "<<l+3;
	else
		cout<<-1;
}