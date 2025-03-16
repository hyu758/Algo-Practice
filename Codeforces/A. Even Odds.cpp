#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#define fastIn ios_base::sync_with_stdio(false);cin.tie(0);
#define foru(i, b, e, s) for (int i = b; i <= e; i += s)
#define ford(i, b, e, s) for (int i = b; i >= e; i -= s)
#define all(v) v.begin(), v.end()
#define vecint vector<int>
#define pb push_back
#define fi first
#define se second
#define cyes cout<<"YES\n"
#define cno cout<<"NO\n"
typedef long long  ll;

const long long MOD = 1e9 + 7;
const double pi = 2.0 * acos(0.0);
const double EPS = 1e-6;
double DEG_to_RAD(double d) { return d * pi / 180.0; }
double RAD_to_DEG(double r) { return r * 180.0 / pi; }

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
// U, R, D, L

int main(){
	fastIn;
	ll n,k;
	cin>>n>>k;
	ll size = ceil(n*1.0/2);
	if (k<=size) cout<<1+2*(k-1);
	else cout<<2+2*(k-size-1);
    
}