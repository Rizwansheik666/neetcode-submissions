class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<int>>mp;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(i);
        }
        for(auto l:mp){
            vector<string>tp;
            for(int i=0;i<l.second.size();i++){
                tp.push_back(strs[l.second[i]]);
            }
            ans.push_back(tp);
        }
        return ans;
    }
};
