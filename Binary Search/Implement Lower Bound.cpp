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
