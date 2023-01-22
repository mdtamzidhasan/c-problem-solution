int maximumCount(int* nums, int numsSize){
    int pcount=0;
    int ncount=0;
    for(int i=0;i<numsSize;i++)
    {
       if(nums[i]>0)
       pcount++;
       else if(nums[i]<0)
       ncount++;
    }
    if(pcount>ncount)
    return pcount;
    else return ncount;

}
