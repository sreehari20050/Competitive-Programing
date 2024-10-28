vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    for(int f = 0 ; f < k ; f++){
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
      arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    }
    return arr;
    
}
