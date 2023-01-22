int smallestEvenMultiple(int n){
    int a=n;
    while(1)
    {
        if(a%n==0&&a%2==0)
        break;
        a++;
    }
    return a;

}
