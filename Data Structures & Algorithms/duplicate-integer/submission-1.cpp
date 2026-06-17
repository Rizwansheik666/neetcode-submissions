class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        for(auto q:nums){
            st.insert(q);
        }
        return st.size()!=nums.size();
    }
};