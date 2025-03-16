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
    int t,n;
    cin>>t;
    n=3;
    int count=0,sum;
    int a[t][n];
    for (int i=0;i<t;i++){
    	for (int j=0;j<n;j++){
    		cin>>a[i][j];
		}
	}
	for (int i=0;i<n;i++){
		sum=0;
		for (int j=0;j<t;j++){
			sum+=a[j][i];
		}
		if (sum==0){
			count++;
		}
	}
 
	if (count==3){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}