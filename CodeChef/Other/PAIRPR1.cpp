#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N =1e4+1;

vector<bool> check(N, true);
vector<int> primes;
void sieve(){
	check[0]=check[1]=false;
	for(int i=2;i<=N;++i){
		if(check[i]){
			for(int j=i*i;j<=N;j+=i)
				check[j]=false;
		}
	}
	for(int i=0;i<=N;++i)
		if(check[i])
			primes.push_back(i);
}

int main(){
	sieve();
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		bool flag = true;
		for(auto i: primes){
			if(i>n)
				break;
			if(check[n-i]){
				cout<<i<<" "<<n-i<<"\n";
				flag =false;
				break;
			}
		}
		if(flag)
			cout<<"-1 -1\n";
	}
}