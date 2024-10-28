int a = arr[0];
        for(auto it : arr){
            if(it>a){
                a=it;
            }
        }
        return a;
