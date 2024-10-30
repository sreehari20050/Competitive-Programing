//Solution 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int a = 0 , b = 0 ;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                if (nums[j] + nums[i] == target) {
                    a=i;
                    b=j;
                }
            }
        }
        return vector<int> {a,b};
    }
};



//Solution 2
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int sum = target - num;
            if (mpp.find(sum) != mpp.end()) {
                return {mpp[sum], i};
            }
            mpp[num] = i;
        }
        return{-1,-1};
    }
};
