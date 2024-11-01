class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int sum = target - num;
            if (mpp.find(sum) != mpp.end()) {
                return {mpp[sum]+1, i+1};
            }
            mpp[num] = i;
        }
        return{-1,-1};
    }
};
