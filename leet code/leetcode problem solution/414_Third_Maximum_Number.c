int thirdMax(int* nums, int numsSize){
long m1=LONG_MIN,m2=LONG_MIN,m3=LONG_MIN;
int count=0;
for(int i=0;i<numsSize;i++)
{
    if(nums[i]!=m1&&nums[i]!=m2&&nums[i]!=m3){
    if(nums[i]>m1)
    {
        count++;
        m3=m2;
        m2=m1;
           m1=nums[i];
    }
    else if(nums[i]>m2)
    {
        count++;
        m3=m2;
        m2=nums[i];

    }
    else if(nums[i]>m3)
    {
        count++;
          m3=nums[i];
    }}

}
if(count<3)
return m1;
else
return m3;

}
