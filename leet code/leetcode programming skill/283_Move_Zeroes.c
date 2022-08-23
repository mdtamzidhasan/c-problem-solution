
void moveZeroes(int* nums, int numsSize){

int j=0,i,temp=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i])
        {
            temp=nums[i];
            nums[i]=0;
            nums[j++]=temp;
        }
    }
}
