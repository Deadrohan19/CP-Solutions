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
#define pf push_front
#define F first
#define S second
#define MOD 1e9+7
#define INF (int)1e9
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


void test_case(){
    ll n;cin>>n;
    string a,b;cin>>a>>b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i=0, p=n-1;
    int j=n-1,q=0;
    string start,last;
    for(int k=0;k<n;++k){
    	if(a[i]<b[j]){
    		start.pb(a[i]);
    		i++;
    	}
    	else{
    		last.pb(a[p]);
    		p--;
    	}
    	if(i==n||b[j]>a[i]){
    		start.pb(b[j]);
    		j--;
    	}
    	else{
    		last.pb(b[q]);
    		q++;
    	}
    }
    reverse(last.begin(), last.end());
    cout<<start<<last<<"\n";
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