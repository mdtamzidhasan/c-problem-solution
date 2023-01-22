int sumOfUnique(int* nums, int numsSize){
    int sum=0;
    int count=0;
    for(int i=0;i<numsSize;i++)
{
    count=0;
 for(int j=0;j<numsSize;j++)
 {
     if(nums[i]==nums[j])
      count++;
 }
 if(count==1)
sum=sum+nums[i];
}

return sum;
}
