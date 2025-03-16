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
	string s;
	cin>>s;
	string tmp="";
	for (auto x:s){
	    tmp+=(char)tolower(x);
	}
	char vowels[6]={ 'a', 'o', 'y', 'e', 'u', 'i'};
	vector<char> v;
	bool f=true;
	for (auto x:tmp){
	    f=true;
	    for (auto z:vowels){
	        if (x==z) f=false;
	    }
	    if (f) v.push_back(x);
	}
	for (auto x:v){
	    cout<<"."<<x;
	}
	
}
