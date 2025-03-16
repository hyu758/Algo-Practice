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

string s;
int a[300005];
int n, k;

bool check(int x) {
    int cnt = 0;
    int i = 0;
    while(i < n) {
        if(s[i] == 'R' && a[i] > x) {
            i++;
            continue;
        }
        bool f = false;
        for (; i < n; i++){
        	if (s[i] == 'R' && a[i] > x) break;
        	if(s[i] == 'B' && a[i] > x) f = true;
        }
        if (f) ++cnt;
    }
    return cnt <= k;
}

int main(){
	fastIn;
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        cin >> s;
        int mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        	mx = max(mx, a[i]);
        }
        int l = 0, r = mx;
        while(l < r) {
            int m = l + (r - l) / 2;
            if(check(m)) {
                r = m;
            } else {
                l = m + 1;
            }
        }
        cout << l << nl;
    }

    return 0;
}