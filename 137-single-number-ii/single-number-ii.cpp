class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(size_t i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        for(auto i:hash)
        {
            if(i.second==1)
            {
                return i.first;
                break;
            }
        }
        return 0;
        
    }
};