bool isPalindrome(int x){
   int temp=x;
    int number;
    double n=0;
    while(temp>0)
    {
        number=temp%10;
        n=(n*10)+number;

        temp/=10;
    }
if(n==x)
    return true;
    else
        return false;
}
