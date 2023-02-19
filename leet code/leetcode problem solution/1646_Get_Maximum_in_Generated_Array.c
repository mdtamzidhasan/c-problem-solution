int getMaximumGenerated(int n){
    int nums[n+1];
    if(n==0)
    nums[0]=0;
    else if(n==1)
    {
        nums[0]=0;
        nums[1]=1;
    }

    else{
        int div;
        nums[0]=0;
        nums[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
          div=i/2;
          nums[i]=nums[div];
        }
        else
        {
            div=i/2;
            nums[i]=nums[div]+nums[i-div];
        }
    }

    }
    int max=0;
    for(int i=0;i<=n;i++)
    {
        if(nums[i]>max)
        max=nums[i];
    }
    return max;

}
