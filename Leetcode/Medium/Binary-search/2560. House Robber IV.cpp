class Solution {
    public:
        int minCapability(vector<int>& nums, int k) {
            int l = 1, r = *max_element(nums.begin(), nums.end());
            int ans;
            while (l <= r){
                int m = (l + r) / 2;
                int cnt = 0;
                for (int i = 0; i < nums.size(); i++){
                    if (nums[i] <= m){
                        ++cnt;
                        ++i;
                    }
                }
                if (cnt >= k){
                    r = m - 1;
                    ans = m;
                }
                else{
                    l = m + 1;
                }
            }
            return ans;
        }
    };