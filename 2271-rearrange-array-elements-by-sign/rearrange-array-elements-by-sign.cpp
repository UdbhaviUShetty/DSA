class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0,neg=1;
        vector<int> ans(nums.size());
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]>0)
            {
                ans[pos]=nums[i];
                pos=pos+2;
            }
            else
            {
                ans[neg]=nums[i];
                neg=neg+2;
            }
            i++;
        }
        return ans;
        
    }
};