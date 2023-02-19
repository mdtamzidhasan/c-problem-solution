void duplicateZeros(int* arr, int arrSize){
int nums[arrSize];
int i=0,j=0;
while(i<arrSize&&j<arrSize)
{
    if(arr[i]==0)
    {
        nums[j]=0;
        if(j+1<arrSize)
        {
            nums[j+1]=0;
        }
        j=j+2;
        i++;

    }
    else
    {
        nums[j]=arr[i];
        j++;
        i++;
    }

}
for(int k=0;k<arrSize;k++)
{
    arr[k]=nums[k];
}
return arr;
}
