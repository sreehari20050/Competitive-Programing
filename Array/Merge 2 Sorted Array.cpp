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

