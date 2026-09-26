class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums(nums1.size()+nums2.size());
        int index=-1;        
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums.begin());
        if(nums.size()%2==0)
        {
            index=nums.size()/2;
            return (double)(nums[index-1]+nums[index])/2;
        }
        else
        {
            index=(int)nums.size()/2;
            return nums[index];
        }

        
    }
};