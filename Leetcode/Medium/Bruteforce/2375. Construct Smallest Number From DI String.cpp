class Solution {
    public:
        bool f(vector<int> &v, string &s){
            for (int i = 0; i < s.size(); i++){
                if (s[i] == 'I'){
                    if (v[i] > v[i + 1]) return false;
                }
                if (s[i] == 'D'){
                    if (v[i] < v[i + 1]) return false;
                }
            }
            return true;
        }
        string smallestNumber(string pattern) {
            vector<int> v;
            string ans = "";
            for (int i = 1; i <= pattern.size() + 1; i++){
                v.emplace_back(i);
            }
            do{
                if(f(v, pattern)){
                    for (auto &x : v){
                        ans += to_string(x);
                    }
                    break;
                };
            }
            while (next_permutation(v.begin(), v.end()));
            return ans;
        }
    };