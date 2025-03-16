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
string res(int n, vecint v){
    for (auto x:v){
        if (n%x==0) return "YES";
    }
    return "NO";
}
int main(){
	fastIn;
	vecint v;
	string s;
	int num;
	v.pb(4);v.pb(44);v.pb(444);v.pb(7);v.pb(77);v.pb(777);
	string a[3]={"47","447","477"};
	for (int i=0; i<3; i++){
	    s=a[i];
	    do{
    	    stringstream ss(s);
    	    ss>>num;
    	    v.push_back(num);
	    }
	    while(next_permutation(s.begin(), s.end()));
    }
    int n;
    cin>>n;
    cout<<res(n,v);
}