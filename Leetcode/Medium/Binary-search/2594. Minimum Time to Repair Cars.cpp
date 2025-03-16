class Solution {
    public:
        bool f(vector<int> &ranks, long long x, int cars){
            int sum = 0;
            for (int i = 0; i < ranks.size(); i++){
                sum += sqrt(x/ranks[i]);
                if (sum >= cars) return true;
            }
            return false;
        }
        long long repairCars(vector<int>& ranks, int cars) {
            long long l = 1, r = 100000000000005;
            long long ans = r;
            while (l <= r){
                long long m = (l + r) / 2;
                if (f(ranks, m, cars)){
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