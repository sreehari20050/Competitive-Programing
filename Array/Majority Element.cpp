//Solution 1
class Solution {
public:
    int majorityElement(vector<int>& v) {
        map<int, int> mpp;
        for (int i = 0; i < v.size(); i++) {
            mpp[v[i]]++;
        }
        for (auto it : mpp) {
            if (it.second > (v.size() / 2)) {
                return it.first;
            }
        }
        return -1;
    }
};


//Solution 2 Moore's Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0 ;
        int element ;
        for (int i = 0; i < nums.size(); i++){
            if(cnt == 0){
                element = nums[i];
                cnt = 1;
            }
            else if(nums[i] == element){
                cnt++;
            }
            else{
                cnt--;
            }

        }
        int cnt1 = 0;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] == element){cnt1++;}
        }
        if(cnt1> (nums.size() / 2)){
            return element;
        }
        return -1;
    }
};

