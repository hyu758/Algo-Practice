#include <bits/stdc++.h>
#define fastIn ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long  ll;
using namespace std;
#define all(v) v.begin(), v.end()
#define vecint vector<int>
#define push_back pb
#define endl '\n'2 4
#define ll long long
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, 1, -1};
int main(){
	fastIn;
	int t;
	cin>>t;
	while (t--){
	    ll n;
	    cin>>n;
	    ll sum=n/2;
	    while (sum>=1){
	    	n+=sum;
	    	sum/=2;
		}
		cout<<n<<"\n";
	}
}