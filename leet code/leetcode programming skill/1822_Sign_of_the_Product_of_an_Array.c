
int arraySign(int* nums, int numsSize){
   signed int product=1;
    for(int i=0;i<numsSize;i++)
    {
        product=product*nums[i];
        product=signFunc(product);
    }

return product;
}
int signFunc(int x)
{
    if(x>0)
        return 1;
    else if(x<0)
        return -1;
    else
        return 0;
}
