//Solution 1
#include <set>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    std::set<int> c;
    int n = a.size();
    int m = b.size();
    vector < int > Union;
    for( int i = 0 ; i < n ; i++){
        c.insert(a[i]);
    }
    for(int i = 0 ; i < m ; i++){
        c.insert(b[i]);
    }
     for (auto & it: c)
    Union.push_back(it);
     return Union;
}





//Solution 2
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int i= 0;
    int j = 0;
    int n1 = a.size();
    int n2 = b.size();
    vector<int> Union;

    while(i<n1 && j<n2){
      if(a[i] <= b[j]){
        if (Union.size() == 0 || Union.back() != a[i]) {
          Union.push_back(a[i]);
        }
        i++;
      } else {
        if (Union.size() == 0 || Union.back() != b[j]) {
          Union.push_back(b[j]);
        }
          j++;
      }
    }
    while(i<n1){
      if(Union.size() == 0 || Union.back() != a[i]){
          Union.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if (Union.size() == 0 || Union.back() != b[j]) {
          Union.push_back(b[j]);
        }
        j++;
    }
    
    return Union;

}
