class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>numSet(nums.begin(),nums.end());
        int longStr=0;
        for(int num:numSet){
            if(numSet.find(num-1)==numSet.end()){
                int currNum=num;
                int currStr=1;

                while(numSet.find(currNum+1)!=numSet.end()){
                    currNum+=1;
                    currStr+=1;
                }
                longStr=max(longStr,currStr);
            }
        }
        return longStr;
    }
};
