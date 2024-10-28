int getSecondLargest(vector<int> &arr) {
        // Code Here
        int a = arr[0];
        int b = -1;
        for(auto it : arr){
            if(it>a){
                a=it;
            }
        }
        for(auto it : arr){
            if(it>b && it != a){
                b=it;
            }

        }   
        return b;
    }
