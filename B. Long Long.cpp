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
	    ll a[n];
	    ll sum=0;
	    for (int i=0; i<n;i++){
	        cin>>a[i];
	    }
	    int i=0;
	    int count=0;
	    while (i<n){
	        if (a[i]<0){
	        	int j=i;
	        	while (j<n && a[j] <=0){
	        		sum+=abs(a[j]);
	        		j++;
				}
				i=j;
				count++;
	            
	        }
	        else{
	            sum+=a[i];
	            i++;
	        }
	    }
	    cout<<sum<<" "<<count<<"\n";
	}
}