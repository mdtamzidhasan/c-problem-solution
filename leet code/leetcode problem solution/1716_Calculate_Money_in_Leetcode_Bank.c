int totalMoney(int n){
    double sum=0;
    int week=1;
    int j=0;


    for(int i=1;i<=n;i++)
    {
       sum=sum+j+week;
       j++;
       if(i%7==0)
       {
           j=0;
           week++;
       }
    }

return sum;
}
