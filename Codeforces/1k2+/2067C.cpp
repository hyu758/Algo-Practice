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
ll MOD = 1000000007;


bool check(ll n){
    while (n){
        if (n % 10 == 7) return true;
        n/=10;
    }
    return false;
}
int main(){
	fastIn;
    int t;
    cin >> t;
    vll num;
    for (int i = 1; i <= 10; i++){
        num.pb(pow(10, i) - 1);
    }
    while (t--){
        ll n;
        cin >> n;
        int ans = 7;
        for (auto x : num){
            for (int i = 0; i <= 7; i++){
                if (check(n + x * i)){
                    ans = min(ans, i);
                }
            }
        }
        cout << ans << nl;
    }

    return 0;
}