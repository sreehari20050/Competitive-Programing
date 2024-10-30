class Solution {
public:
    int singleNumber(vector<int>& arr) {
    int xorr = 0 ; 
	for(int i = 0 ; i < arr.size() ; i++){
		xorr = xorr ^ arr[i];
	}
	return xorr;
}
};
