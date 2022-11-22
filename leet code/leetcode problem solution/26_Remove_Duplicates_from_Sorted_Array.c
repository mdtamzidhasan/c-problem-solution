
int removeDuplicates(int* nums, int numsSize){
    if(numsSize==0)
    return 0;
    int index=1;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]!=nums[i+1])
        {
            nums[index]=nums[i+1];
            index++;
        }
    }
    return index;

}
