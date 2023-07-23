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
	int n;
	cin>>n;
	int a[n];
	for (auto &x:a) cin>>x;
	sort(a,a+n);
	int sum=0, res=0;
	int tmp = lower_bound(a, a+n, 4) -a;
	res+=n-tmp;
	int i=0, j = tmp-1;
	sum=a[j];
	while (i<j){
	    sum+=a[i];
	    if (sum<=4){
	        i++;
	    }
	    else{
	        j--;
	        sum=a[j];
	        res++;
	    }
	}
	if (i==j) res++;
	cout<<res;
	
}