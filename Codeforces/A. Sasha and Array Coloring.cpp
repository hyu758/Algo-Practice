#include <bits/stdc++.h>
#define fastIn ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long  ll;
using namespace std;
#define all(v) v.begin(), v.end()
#define vecint vector<int>
#define push_back pb
#define endl '\n'2 4
#define ll long long
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, 1, -1};
int main(){
	fastIn;
	int t;
	cin>>t;
	while (t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for (int i=0; i<n;i++){
	        cin>>a[i];
	    }
	    sort(a, a+n);
	    int ans=0;
	    int i=0, j=n-1;
	    while (i<j){
	        ans+=a[j] - a[i];
	        i++;
	        j--;
	    }
	    cout<<ans<<"\n";
	}
}