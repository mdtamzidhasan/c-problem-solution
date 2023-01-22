int averageValue(int* nums, int numsSize){
    int count=0;
    int sum=0;
    int avr;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]%2==0&&nums[i]%3==0)
        {
            sum=sum+nums[i];
            count++;
        }
    }
    if(sum==0)
    return 0;
    else{
      avr=sum/count;
    return avr;
    }


}
