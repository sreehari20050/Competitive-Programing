
	int i = 0;
	int j = 0;

	vector<int> answer;
	while(i < A.size() && j < B.size()){
		if(A[i]<B[j]){
			i++;
		}
		else if(A[i]<B[j]){
			j++;
		}
		else {
			answer.push_back(A[i]);
			i++;
			j++;
		}
	}
	return answer;
