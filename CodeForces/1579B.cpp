/*Debugging: 
1. Forgot to take input of test_case
2. Read Question again while facing multiple WA
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define mp make_pair
#define all(x) begin(x),end(x)
#define forall(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define F first
#define S second
#define MOD 1e9+7
#define INF (int)1e9
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void shift_a(ll arr[],ll l,ll r, ll d){
	ll temp[d];
	for(int i=l,j=0;i<l+d;++i,++j)
		temp[j]=arr[i];
	for(int i=l+d,j=0;i<=r;++i,++j)
		arr[l+j]=arr[i];
	for(int i=r+1-d,j=0;i<=r;++i,++j)
		arr[i]=temp[j];
}


void test_case(){
    ll n;cin>>n;
    ll arr[n],arr_s[n];
    for(int i=0;i<n;++i){
    	cin>>arr[i];
    	arr_s[i]=arr[i];
    }
    sort(arr_s,arr_s+n);
    
    ll cnt=0;
    vector<ll> vec;
    while(cnt != n){
    	if(arr[cnt]==arr_s[cnt])
    		cnt++;
    	else{
    		ll temp= cnt+1;
    		while(arr[temp] != arr_s[cnt])
    			temp++;
    		vec.pb(cnt+1);
    		vec.pb(temp+1);
    		vec.pb(temp-cnt);
    		shift_a(arr,cnt,temp,temp-cnt);
    	}
    }
    cout<<vec.size()/3<<"\n";
    for(int i=0;i<vec.size();i+=3)
    	cout<<vec[i]<<" "<<vec[i+1]<<" "<<vec[i+2]<<"\n";
}

int main(){
	deadman
    
    clock_t start = clock();
    ll tc=1;
    cin>>tc;
    while(tc--){
        test_case();
    }
    clock_t end = clock();
    cerr << endl
        << endl
        << "Executed In: " << double(end - start) / CLOCKS_PER_SEC * 1000 << " ms";
}
