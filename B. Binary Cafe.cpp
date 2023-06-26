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
int main(){
	fastIn;
	int t;
	cin>>t;
	while (t--){
	    ll n,k;
	    cin>>n>>k;
	    if (k>=30){
	        cout<<n+1<<"\n";
	        continue;
	    }
	    ll ans = min(n+1,(ll)pow(2,k));
	    cout<<ans<<"\n";
	    
	}
}