int removeElement(int* nums, int numsSize, int val){
int count=0,i,n=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
            count++;
            nums[n]=nums[i];
            n++;
        }
    }
return count;
}
