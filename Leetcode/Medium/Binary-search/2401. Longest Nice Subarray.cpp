class Solution {
public:
    bool f(vector<int>& nums, int x){
        for (int i = 0; i < nums.size() - x + 1; i++){
            bool f = false;
            int tmp = 0;
            for (int j = i; j < i + x; j++){
                if (!(tmp & nums[j])){
                    tmp |= nums[j];
                }
                else{
                    f = true;
                    break;
                }
            }
            if (!f){
                return true;
            }
        }
        return false;
    }
    int longestNiceSubarray(vector<int>& nums) {
        int l = 1, r= nums.size();
        int ans = 1;
        while (l <= r){
            int m = (l + r)/2;
            if (f(nums, m)){
                l = m + 1;
                ans = m;

            }
            else r = m - 1;
        }
        return ans;
    }
};