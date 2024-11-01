//Solution 1

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0;
        int o = 0;
        int t = 2;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){z++;}
            else if(nums[i] == 1){o++;}      
            else{t++;}      
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(z != 0){
                nums[i] = 0;
                z--;
            }
            else if(o != 0){
                nums[i] = 1;
                o--;
            }
            else{
                nums[i] = 2;

            }
        }
    }
};


//Solution 2 Dutch National flag Algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0 , mid = 0 , high = n-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};
