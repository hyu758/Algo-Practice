#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i=0; i<n; i++){
            cin>>a[i];
        }
        int mark=0;
        int index=0;
        string res="";
        res+='1';
        for (int i=1; i<n; i++){
            if (mark==0){
                if (a[i] < a[index]){
                    mark=i;
                    if(a[0] >=a[i]) res+='1';
                    else{
                    	res+='0';
                    	mark=0;
					}
                }
                else{
                	res+='1';
                	index=i;
				}
            }
            else{
                if (a[i] <= a[0] && a[i] >= a[mark]){
                    res+='1';
                    mark = i;
                }
                else{
                    res+='0';
                }
            }
        }
        cout<<res<<"\n";
        
    }
}