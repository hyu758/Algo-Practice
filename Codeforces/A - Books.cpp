#include <bits/stdc++.h>
#define fastIn ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
#define all(v) v.begin(), v.end()
#define vecint vector<int>
#define pb push_back
#define endl '\n'
typedef long long ll;
int main(){
	fastIn;
    int n;
    int t;
    cin>>n>>t;
    int res=0;
    int a[n+1];
    for (int i=1; i<=n; i++){
        cin>>a[i];
    }
    int pr[n+1];
    pr[0]=0;
    for (int i=0; i<n; i++){
        pr[i+1] = a[i+1] + pr[i];
    }
    for (int i=0; i<=n; i++){
            int tmp= pr[i] - t;
            int l = lower_bound(pr, pr+n+1, tmp) - pr;
            int tong = pr[i] - pr[l];
            res = max(res, i-l);
    }
    cout<<res;
}
