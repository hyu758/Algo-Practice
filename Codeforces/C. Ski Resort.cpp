#include <bits/stdc++.h>
#define fastIn ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long  ll;
using namespace std;
#define all(v) v.begin(), v.end()
#define vecint vector<int>
#define push_back pb
#define endl '\n'
#define ll long long
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, 1, -1};
ll sumD(ll k, ll x){
    if (k>x){
        return 0;
    }
    x=x-k+1;
    return x*(x+1)/2;
}
int main(){
	fastIn;
	int t;
	cin>>t;
	while (t--){
	    ll n,k,q;
	    cin>>n>>k>>q;
	    ll a[n];
	    for (int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    int i=0;
	    ll count=0;
	    ll res=0;
	    while (i < n){
	        if (a[i] > q){
	            i++;
	            res+=sumD(k, count);
	            count=0;
	        }
	        else{
	            count++;
	            i++;
	        }
	    }
	    res+=sumD(k, count);
	    cout<<res<<"\n";
	}
}