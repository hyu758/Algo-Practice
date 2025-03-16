#include <bits/stdc++.h>
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC optimize("Ofast")
using namespace std;
typedef long long  ll;
#define fastIn ios_base::sync_with_stdio(false);cin.tie(0);
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pb push_back
#define fi first
#define se second
#define cyes cout<<"YES\n"
#define cno cout<<"NO\n"
const char nl = '\n';
const double pi = 2.0 * acos(0.0);
const double EPS = 1e-6;
#define prec(n) fixed<<setprecision(n)
double DEG_to_RAD(double d) { return d * pi / 180.0; }
double RAD_to_DEG(double r) { return r * 180.0 / pi; }
inline ll gcd(ll a, ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a, ll b){return a/gcd(a,b)*b;};
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
const string dir = "RDLU";
// R, D, L, U
ll MOD = 998244353;


int main(){
	fastIn;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n + 1];
        
        a[1] = 0;
        int mx = 0;
        for (int i = 2; i <= n; i++){
        	int x;
        	cin >> x;
        	a[i] = a[x] + 1; 
        	mx = max(mx, a[i]);
        }
        
        ll cnt[mx + 1] = {0};
        ll dp[mx + 1] = {0};
        for (int i = 2; i <= n; i++) ++cnt[a[i]];
    	
    	// dp[i] = tong so day co the chon do sau i
    	dp[mx] = cnt[mx] % MOD;
    	// cout << dp[mx + 1] << nl;
        for (int i = mx - 1; i >= 1; i--){
        	// cout << i << " " << cnt[i] << nl;
        	dp[i] = ((cnt[i] % MOD) + (dp[i + 1] * (cnt[i] - 1ll)) % MOD) % MOD;
        	
        }
        cout << (dp[1] + 1ll) % MOD << nl;
    }

    return 0;
}