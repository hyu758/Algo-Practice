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
	int n;
	cin>>n;
	string s="";
	int num;
	vector<ll> v;
	string a[4]={"47", "4477", "444777", "44447777"};
	for (int i=0; i<4; i++){
	    s=a[i];
	    do{
    	    stringstream ss(s);
    	    ss>>num;
    	    v.push_back(num);
	    }
	    while(next_permutation(s.begin(), s.end()));
	}
	v.push_back(4444477777);
	int i=lower_bound(all(v), n) - v.begin();
	cout<<v[i];
	
}
