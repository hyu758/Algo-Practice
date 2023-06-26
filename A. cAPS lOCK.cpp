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
    string s;
    char c;
    bool f = true;
    cin >> s;

    for(int i = 1; i < s.length(); i++)
    {
        if(islower(s[i]))
        {
            f = false;
        }
    }

    if(f)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(islower(s[i])){
                c = toupper(s[i]);
            }
            else{
                c = tolower(s[i]);
            }
            cout << c;
        }
    }
    else{
        cout << s;
    }
}