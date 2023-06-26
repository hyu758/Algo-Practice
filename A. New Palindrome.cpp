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
	    string s;
	    cin>>s;
	    int n = s.size();
	    int l =n/2 - 1;
	    set<char> tmp;
	    for (int i=0; i<=l; i++){
	        tmp.insert(s[i]);
	    }
	    if (tmp.size()>1){
	        cout<<"YES"<<"\n";
	    }
	    else{
	        cout<<"NO"<<"\n";
	    }
	}
}