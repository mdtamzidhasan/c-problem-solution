 int *arr=(int*)malloc(sizeof(int)*2);
   *returnSize=2;
   arr[0]=-1;
   arr[1]=-1;
   if(numsSize==0)
   return arr;
   if(numsSize==1&&nums[0]==target)
   {
       arr[0]=0;
       arr[1]=0;
       return arr;
   }

   int start=0;
   int end=numsSize-1;
   int mid;
   while(start<=end)
   {
       mid=start+(end-start)/2;
       if(nums[mid]==target)
       break;
       else if(nums[mid]>target)
       end=mid-1;
       else
       start=mid+1;
   }
   if(nums[mid]!=target)
   return arr;

   start=mid;
   end=mid;
   while(start>=0&&nums[start]==target)
   start--;
   while(end<numsSize&&nums[end]==target)
   end++;

   arr[0]=start+1;
   arr[1]=end-1;
   return arr;
