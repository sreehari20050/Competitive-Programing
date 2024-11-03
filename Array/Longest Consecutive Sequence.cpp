class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        unordered_set<int> st(a.begin(), a.end());
        if (a.size() == 0)
            return 0;
        int longest = 1;
        for (int i = 0; i < a.size(); i++) {
            int num = a[i];
            int cur = 0;
            if (st.find(num - 1) != st.end())
                continue;
            while (st.find(num) != st.end()) {
                cur++;
                num++;
            }
            longest = max(longest, cur);
        }

        return longest;
    }
};
