#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll d;cin>>d;
	if(d&1)
		cout<<"-1\n";
	else{
		cout<<d<<" "<<d<<"\n";
		cout<<d<<" "<<0<<"\n";
		cout<<d/2<<" "<<d/2<<"\n";
		cout<<d+d/2<<" "<<d/2<<"\n";
	}
}