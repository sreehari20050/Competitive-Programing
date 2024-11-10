//Solution 1 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum+=nums[j];
                if (sum == k) {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};

//Solution 2
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mpp;
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        mpp[0] = 1;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int remove = sum - k;
            cnt += mpp[remove];
            mpp[sum] += 1;
        }

        return cnt;
    }
};
