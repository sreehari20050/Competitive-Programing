//Solution  1


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans = 0;
        for (int i = 1 ; i < nums.size() ; i++){
            if(nums[i] > nums[ans]){
                ans = i;
            }
        }
        return ans;
    }
};

//Solution 2

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if ((i == 0 || nums[i - 1] < nums[i]) &&
                (i == nums.size() - 1 || nums[i] > nums[i + 1])) {
                return i;
            }
        }
        return -1;
    }
};

//Solution 3

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n - 1;
        int low = 1;
        int high = n - 2;
        while(low <= high){
            int mid = (low + high) / 2 ;
            if(nums[mid]>nums[mid + 1] && nums[mid] > nums[mid - 1]){
                return mid;
            }
            else if(nums[mid]<nums[mid+1]){
                low = mid + 1;
            }
            else if(nums[mid]<nums[mid-1]){
                high = mid - 1;
            }
        }
        return -1;
    }
};
