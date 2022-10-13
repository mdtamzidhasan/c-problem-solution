

int missingNumber(int* nums, int numsSize){
    int r=numsSize;
    for(int i=0;i<numsSize;i++)
    {
        r=r+i-nums[i];

    }
return r;
}
