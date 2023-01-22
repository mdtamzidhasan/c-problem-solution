int countEven(int num){
    int a=0,rev,b;
    int count=0;
    for(int i=1;i<=num;i++)
    {
        a=0;
        b=i;
        while(b!=0)
        {
            rev=b%10;
            a=a+rev;
            b=b/10;
        }
        if(a%2==0)
        count++;
    }
    return count;

}
