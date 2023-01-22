int findMaxK(int* nums, int numsSize){
    int count=0;
    int max=0;
    int a;
    for(int i=0;i<numsSize;i++)
    {

        a=-nums[i];
        for(int j=0;j<numsSize;j++)
        {

            if(a==nums[j])
            {
                count++;
                if(nums[i]>max)
                 max=nums[i];
            }
        }
    }
if(count>=1)
return max;
else
return -1;
}
