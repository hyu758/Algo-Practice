#include <bits/stdc++.h>
using namespace std;
const int m=1001,n=1001;
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, 1, -1};
int h,c;
int a[n][m];
bool visited[n][m];
long long sum=0;
void findSum(int x, int y){
    visited[x][y]=true;
    sum+=a[x][y];
    for (int i=0;i<4;i++){
        int nx= x + dx[i];
        int ny= y + dy[i];
        if (nx >= 0 && nx < h && ny >=0 && ny < c){
            if (!visited[nx][ny] && a[nx][ny]!=0){
                findSum(nx, ny);
            }
        }
    }
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        long long res=0;
        cin>>h>>c;
        for (int i=0;i<h;i++){
            for (int j=0;j<c;j++){
                cin>>a[i][j];
                visited[i][j]=false;
            }
        }
        for (int i=0; i<h; i++){
            for (int j=0; j<c; j++){
                if (!visited[i][j] && a[i][j]!=0){
                    findSum(i,j);
                    res=max(res, sum);
                    sum=0;
                }
            }
        }
        cout<<res<<"\n";
        
    }
}