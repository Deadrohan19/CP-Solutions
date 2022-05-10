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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define INF LLONG_MAX
#define EPS 1e-9
#define endl "\n"
#define deadman ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//functions
int popcount(int x){return __builtin_popcount(x);}

bool findPair(ll arr[], int size, int n)
{
    // Initialize positions of two elements
    int i = 0;
    int j = 1;
 
    // Search for a pair
    while (i < size && j < size)
    {
        if (i != j && (arr[j] - arr[i] == n || arr[i] - arr[j] == n) )
        {
   
            return true;
        }
        else if (arr[j]-arr[i] < n)
            j++;
        else
            i++;
    }
 
    return false;
}

void test_case(){
    ll n,k;cin>>n>>k;
    ll arr[n];
    for(auto &i: arr)
    	cin>>i;
    sort(arr, arr+n);
    if(findPair(arr,n,k))
    	cout<<"YES\n";
    else
	    cout<<"NO\n";
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
