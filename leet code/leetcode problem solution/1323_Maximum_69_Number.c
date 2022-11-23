int maximum69Number (int num){
    int cnum=num;
    int re,p=-1;
    int  count=0;
    while(cnum>0)
    {
        re=cnum%10;
        if(re==6){
             p=count;

        }

        count++;
        cnum=cnum/10;
    }
if(p==-1)
return num;
else
return num+3*(int)pow(10,p);


}
