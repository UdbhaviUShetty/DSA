
class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int num=nums[i];
            int more=target-num;
            if(hash.find(more)!=hash.end())
            {
                return {hash[more],i};
            }
            hash[num]=i;

        }
        return {-1,-1};
       
        
    }
};