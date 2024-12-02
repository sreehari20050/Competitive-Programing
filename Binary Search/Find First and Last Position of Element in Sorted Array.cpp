//Solution 1

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1 ;
        int last = -1 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if((first == -1 && last == -1) && nums[i] == target){
                first = i;
            }
            if(nums[i] == target && first != -1){
                last = i;
            }
        }
        return {first , last};
    }

};

//Solution 2

int firstoccurence(vector<int>& nums, int target){
    int low = 0 ;
    int high = nums.size() - 1;
    int first = -1;
    while(low <= high){
        int mid = (low + high) / 2 ;
        if(nums[mid] == target){
            first = mid;
            high = mid - 1;
        }
        else if(nums[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return first;
}
int lastoccurence(vector<int>& nums, int target){
    int low = 0 ;
    int high = nums.size() - 1;
    int last = -1;
    while(low <= high){
        int mid = (low + high) / 2 ;
        if(nums[mid] == target){
            last = mid;
            low = mid + 1;
        }
        else if(nums[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return last;
}
class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstoccurence(nums, target);
        if(first == -1) return {-1,-1};
        int last = lastoccurence(nums, target);
        return {first,last};
    }
};
