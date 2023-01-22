int numberOfMatches(int n){
    int a=n;
    int match=4;
    int teams;
    int sum=0;
    if(n==1)
    return 0;
    while(match>=1)
    {
        if(a%2==0)
        {
            match=a/2;
            teams=a/2;
        }
        else if(a%2!=0)
        {
            match=(a-1)/2;
            teams=(a-1)/2+1;
        }
        a=teams;
        sum=sum+match;
    }
    return sum;

}
