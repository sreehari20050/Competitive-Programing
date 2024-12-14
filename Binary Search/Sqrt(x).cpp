//Solution 1

class Solution {
public:
    int mySqrt(int x) {
        return sqrt(x);
    }
};

//Solution 2

int func(long long mid, int x){
        if((mid * mid) == x) return 0;
        if((mid * mid) < x) return 1;
        return 2;
    }

class Solution {
public:
    
    int mySqrt(int x) {
        if(x == 0) return 0;
        long long low = 1;
        long long high = x;
        int ans = -1;
        while(low <= high){
            long long mid = (low + high) / 2;
            int anss = func(mid,x);
            
            if(anss == 0){
                ans = mid;
                return ans;
            }
            else if(anss == 1){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};
