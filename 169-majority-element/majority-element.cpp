class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,ans=0;
        map<int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        for(auto it:hash)
        {
            if(count<it.second)
            {
                count=it.second;
                ans=it.first;
            }
        }
        return ans;
        
    }
};