class Solution {
    public:
        bool f(int c, vector<int>& a, long long k){
            for (auto &x : a){
                k -= x/c;
                if (k <= 0) return 1;
            }
            return 0;
        }
        int maximumCandies(vector<int>& candies, long long k) {
            long long sum = accumulate(candies.begin(), candies.end(), 0ll);
            if (sum < k) return 0;
            int l = 1, r = *max_element(candies.begin(), candies.end());
            int ans = 0;
            while (l <= r){
                int m = (l + r) / 2;
                if (f(m, candies, k)){
                    l = m + 1;
                    ans = m;
                }
                else r = m - 1;
            }
            return ans;
        }
    };