/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *sums=(int *)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    if(numsSize==0)return sums;
    sums[0]=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        sums[i]=nums[i]+sums[i-1];
    }
    return sums;
}
