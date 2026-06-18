class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        for(auto l:nums){
            mp[l]++;
        }
        vector<pair<int,int>>arr;
        for(auto l:mp){
            arr.push_back({l.second,l.first});
        }
        sort(arr.rbegin(),arr.rend());
        for(int i=0;i<k;i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
