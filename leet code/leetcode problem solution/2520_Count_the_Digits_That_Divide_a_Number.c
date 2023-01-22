int countDigits(int num){
    int count=0;
    int rev;
    int a=num;
    while(a!=0)
    {
        rev=a%10;
        if(num%rev==0)
        count++;
        a=a/10;
    }
    return count;

}
