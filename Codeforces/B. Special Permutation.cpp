#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#define fastIn ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long  ll;
#define all(v) v.begin(), v.end()
#define vecint vector<int>
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
	    int n,a,b;
	    cin>>n>>a>>b;
	    vecint v;
	    v.push_back(a);
	    for (int i=n; i>0; --i){
	        if (i!=a && i!=b){
	            v.push_back(i);
	        }
	    }
	    v.push_back(b);
	    int m1 = *min_element(v.begin(), v.begin() + n/2);
	    int m2 = *max_element(v.begin() + n/2, v.end());
	    if (m1==a && m2==b){
	        for (auto x:v){
	            cout<<x<<" ";
	        }
	    }
	    else{
	        cout<<-1;
	    }
	    cout<<"\n";
	}
}
