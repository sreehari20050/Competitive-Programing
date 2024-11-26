//Solution 1
#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    int cnt = 0 ;
    for(int i = 0 ; i < a.size() ; i++){
        int xxor = 0 ;
        for(int j = i ; j < a.size()  ; j++){
            
            xxor = xxor ^ a[j];
            if(xxor == b){
            cnt++;
        }
        }
        
    }
    return cnt;
}

//Solution 2
#include <bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int k) {
    // Write your code here
    int xr = 0 ;
    map<int,int>st;
    st[xr]++;
    int cnt = 0 ;
    for(int i = 0 ; i < a.size() ; i++){
        xr = xr ^ a[i];
        int x = xr ^ k;
        cnt += st[x];
        st[xr]++;
    }
    return cnt;
}
