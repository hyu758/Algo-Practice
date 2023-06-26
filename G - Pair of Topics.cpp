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
    long long res=0;
    cin>>n;
    int a[n], b[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    for (int i=0; i<n; i++){
        cin>>b[i];
    }
    int c[n];
    for (int i=0; i<n; i++){
        c[i]=a[i]-b[i];
    }
    sort(c,c+n);
    for (int i=0; i<n; i++){
        if (c[i]<0){
            continue;
        }
        int l=lower_bound(c,c+n,-c[i]+1) - c;
        if (i-l > 0){
            res+=i-l;
    }
    }
    cout<<res;
}
