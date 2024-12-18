int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low = 0;
	int high = arr.size() - 1;
	int ans = arr.size();
	while(low <= high){
		int mid = ((low+high)/2);
		if(arr[mid] >= x){
			ans = mid;
			high = mid - 1;
		}
		else{
			low = mid + 1 ;
		}
	}
	return ans;
}
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    // Write Your Code Here
    int cnt_max = 0;
    int index = -1;
    //traverse the matrix:
    for (int i = 0; i < n; i++) {
        int cnt_ones = m - lowerBound(matrix[i],m,1);

        if (cnt_ones > cnt_max) {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;

}
