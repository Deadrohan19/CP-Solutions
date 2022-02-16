#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n;cin>>n;
	if(n>=0){
		cout<<n;
		return 0;
	}
	int last = (-n)%10;
	n/=10;
	if(last>(-n)%10)
		cout<<n;
	else{
		if(n/10 ==0)
			cout<<-last;
		else{
			n/=10;
			cout<<n<<last;
		}
	}
}