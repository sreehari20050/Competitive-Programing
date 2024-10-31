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


//Solution 2
