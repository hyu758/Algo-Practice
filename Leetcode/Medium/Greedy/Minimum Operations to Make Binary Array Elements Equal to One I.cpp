class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                if (i >= nums.size() - 2) return -1;
                nums[i] = !nums[i];
                nums[i + 1] = !nums[i + 1];
                nums[i + 2] = !nums[i + 2];
                ++ans;
            }
        }
        return ans;
    }
};