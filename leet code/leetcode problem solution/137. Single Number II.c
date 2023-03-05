int singleNumber(int* nums, int numsSize){
    int number;
    for(int i=0;i<numsSize;i++)
    {
        int count=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            count++;
        }
        if(count==1)
        {
            number=nums[i];
            break;
        }
            }

return number;
}
