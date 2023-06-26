#include <bits/stdc++.h>
using namespace std;
#define fastIn ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long  ll;
#define all(v) v.begin(), v.end()
#define vecint vector<int>
#define push_back pb
#define endl '\n'
#define ll long long
#define fi first
#define se second
const long long MOD = 1e9 + 7;
const double pi = 2.0 * acos(0.0);
const double EPS = 1e-6;
double DEG_to_RAD(double d) { return d * pi / 180.0; }
double RAD_to_DEG(double r) { return r * 180.0 / pi; }
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
// U, R, D, L
const int maxN=1e5+1;
int n,m,q;
pair<int, int> v[maxN];
int a[maxN];
bool check(int x){
	int tmpA[n];
	memset(tmpA, 0, sizeof(tmpA));
	for (int i=0; i<=x; i++){
		tmpA[a[i]-1] = 1;
	}
	int pr[n+1];
	pr[0] = 0;
	for (int i=1; i<=n; i++){
		pr[i] = pr[i-1] + tmpA[i-1];
	}
	for (int i=0; i<m; i++){
		int d=v[i].se - v[i].fi + 1;
		int sum = pr[v[i].se] - pr[v[i].fi - 1];
		if (sum > d/2){
		    return true;
		}
	}
	return false;
}
int main(){
	fastIn;
	int t;
	cin>>t;
	while (t--){
	    cin>>n>>m;
	    for (int i=0; i<m; i++){
	    	cin>>v[i].fi>>v[i].se;
		}
		cin>>q;
		for (int i=0; i<q; i++){
			cin>>a[i];
		}
		int l=0, r=q-1;
		while (l<r){
			int m = ceil((l+r)/2);
			if (!check(m)){
			  l=m+1;  
			} 
			else{
			    r = m;
			}
		}
        
		if (check(l)) cout<<l+1<<"\n";
		else cout<<-1<<"\n";
	}
}