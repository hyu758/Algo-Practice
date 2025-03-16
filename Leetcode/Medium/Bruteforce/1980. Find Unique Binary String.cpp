class Solution {
    public:
        string findDifferentBinaryString(vector<string>& nums) {
            int n = nums[0].size();
            sort(nums.begin(), nums.end());
            vector<string> s;
            for (int i = 0; i < (1 << n); i++){
                string tmp = "";
                for (int j = 0; j < n; j++){
                    if (i & (1 << j)){
                        tmp = '1' + tmp;
                    }
                    else{
                        tmp = '0' + tmp;
                    }
                }
                s.push_back(tmp);
            }
            string ans = s[nums.size()];
            for (int i = 0; i < nums.size(); i++){
                if (nums[i] != s[i]){
                    ans = s[i];
                    break;
                }
            }
            return ans;
    
        }
    };