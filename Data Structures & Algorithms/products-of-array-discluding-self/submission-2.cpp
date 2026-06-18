class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long temp=0;
        int Zflag=0;
        for(auto l:nums){
            if(l!=0 and temp!=0){
                temp*=l;
            }
            else if(l!=0 and temp==0){
                temp=1;
                temp*=l;
            }
            else Zflag++;
        }
        vector<int>ans;
        for(auto l:nums){
            if(Zflag==1){
                if(l!=0)ans.push_back(0);
                else ans.push_back(temp);
            }
            else if(Zflag>1){
                ans.push_back(0);
            }
            else{
                ans.push_back(temp/l);
            }
        }
        return ans;
    }
};
