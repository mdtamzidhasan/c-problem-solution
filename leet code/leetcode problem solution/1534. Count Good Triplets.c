int countGoodTriplets(int* arr, int arrSize, int a, int b, int c){
    int num,x,y,z,count=0;
    for(int i=0;i<arrSize;i++)
    {
        for(int j=i+1;j<arrSize;j++)
        {
            num=arr[i]-arr[j];
            x=abs(num);
            if(x<=a)
            {
                for(int k=j+1;k<arrSize;k++)
                {
                    y=abs(arr[j]-arr[k]);
                    z=abs(arr[i]-arr[k]);
                    if(y<=b&&z<=c)
                    {
                        count++;
                    }
                }
            }
        }
    }
return count;
