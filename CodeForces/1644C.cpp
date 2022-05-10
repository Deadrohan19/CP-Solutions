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


void test_case(){
    int n,x;cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;++i)
    	cin>>arr[i];
    ll pre[n],suf[n],new_arr[n];
    ll temp=0;
    for(int i=0;i<n;++i){
    	temp+=arr[i];
    	if(temp<0)
    		temp=0;
    	pre[i]=temp;
    }
    for(int i=n-1,temp=0;i>=0;i--){
    	temp+=arr[i];
    	if(temp<0)
    		temp=0;
    	suf[i]=temp;
    }
    for(int i=0;i<n;++i)
    	new_arr[i]=arr[i]+x;
    
    // for(auto i: pre)
    // 	cout<<i<<" ";
    // cout<<"\n";
    // for(auto i: suf)
    // 	cout<<i<<" ";
    // cout<<"\n";
    // for(auto i: new_arr)
    // 	cout<<i<<" ";
    // cout<<"\n\n";
    vector<ll> ans;
    
    ans.pb(*max_element(pre,pre+n));
    for(int i=1;i<n;++i){
    	ll sum=0;
    	for(int j=0;j<i;++j)
    		sum+=new_arr[j];
    	ll mx = max(sum + suf[i],0LL);
    	for(int j=i;j<n-1;++j){
    		
    		sum += new_arr[j];
    		sum -= new_arr[j-i];
    		// cout<<sum<<" ";
    		mx = max(sum+pre[j-i]+suf[j+1],mx);
    	}
    	sum+= new_arr[n-1];
    	sum-= new_arr[n-1-i];
    	mx = max(sum+pre[n-1-i],mx);
    	// cout<<"\n";
    	ans.pb(mx);
    }
    ll sum=0;
    for(int j=0;j<n;++j)
    		sum+=new_arr[j];
    ans.pb(max(sum,0LL));
    
    //prefix max
    ll temp1=ans[0];
    for(int i=1;i<ans.size();++i){
    	temp1=max(temp1, ans[i]);
    	ans[i]=temp1;
    }
    for(auto i: ans)
    	cout<<i<<" ";
    cout<<"\n";
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
