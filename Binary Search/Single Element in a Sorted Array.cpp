//Solution 1

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        for (int i = 0 ; i < n ; i++){
            if(i == 0){
                if(nums[i] != nums[i+1]){return nums[i];}
            }
            else if(i == n-1){
                if(nums[i] != nums[i-1]){return nums[i];}
            }
            else{
                if((nums[i] != nums[i+1]) && (nums[i] != nums[i-1])){
                    return nums[i];
                }
            }
        }
        return nums[0];
    }
};

//Solution 2

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        if (nums[0] != nums[1])
            return nums[0];
        if (nums[n - 1] != nums[n - 2])
            return nums[n - 1];
        int low = 1;
        int high = n - 2;

        while (low <= high) {
            int mid = (low + (high - low)) / 2;
            if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1])
                return nums[mid];

            if ((mid % 2 == 1) && nums[mid] == nums[mid - 1] ||
                (mid % 2 == 0) && nums[mid] == nums[mid + 1]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};

//Solution 3

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;

            // Check if the mid index is even or odd to determine the direction
            if (mid % 2 == 1) {
                mid--; // Ensure we always compare pairs
            }

            // If the pair is valid, move to the right half
            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            } else {
                // If the pair is invalid, move to the left half
                high = mid;
            }
        }

        // The single non-duplicate element is at index 'low'
        return nums[low];
    }
};
