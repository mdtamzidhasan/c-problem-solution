int differenceOfSum(int* nums, int numsSize){
    int esum=0;
    int dsum=0;
    int rev;
    for(int i=0;i<numsSize;i++)
    {
        esum=esum+nums[i];
        while(nums[i]!=0)
        {
           rev=nums[i]%10;
           dsum=dsum+rev;
           nums[i]=nums[i]/10;
        }
    }
if(esum>dsum)
return esum-dsum;
else
return dsum-esum;
}
