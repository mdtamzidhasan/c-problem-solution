
int subtractProductAndSum(int n){
    int digit,sum=0,product=1,result;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        product=product*digit;
        n=n/10;
    }
    result=product-sum;
    return result;

}
