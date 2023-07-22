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
int main(){
	fastIn;
	int t;
	cin>>t;
	while (t--){
	    int n;
	    string s;
	    string e="2020";
	    string tmp="";
	    bool f=true;
	    cin>>n>>s;
	    int z=4;
	    for (int i = 0; i <= z; i++){
	        tmp=s.substr(0,i) + s.substr(n-z+i,z-i);
	        if (tmp==e){
	            cout<<"YES\n";
	            f=false;
	            break;
	        }
	    }
	    if (f) cout<<"NO\n";
	}
}
