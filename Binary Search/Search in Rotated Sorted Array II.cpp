//Solution 1

class Solution {
public:
    bool search(vector<int>& A, int key) {
        for (int i = 0; i < A.size(); i++) {
            if (A[i] == key) {
                return true;
            }
        }
        return false;
    }
};


//Solution 2

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2; // Prevent overflow

            // If target is found
            if (nums[mid] == target) return true;

            // Handle duplicates
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }

            // Check which half is sorted
            if (nums[low] <= nums[mid]) { // Left half is sorted
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else { // Right half is sorted
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return false; // Target not found
    }
};
